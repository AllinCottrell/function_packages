
gretl_matrix *dumx (const gretl_matrix *m,
		    const gretl_matrix *x,
		    int i)
{
    gretl_matrix *s;
    int j, c, k;

    s = gretl_matrix_alloc(2, x->cols);
    for (j=0; j<x->cols; j++) {
	gretl_matrix_set(s, 0, j, x->val[j]);
	gretl_matrix_set(s, 1, j, x->val[j]);
    }

    j = gretl_matrix_get(m, i, 0);
    gretl_matrix_set(s, 0, j, 0.0);
    gretl_matrix_set(s, 1, j, 1.0);

    for (c=3; c<m->cols; c+=2) {
	j = gretl_matrix_get(m, i, c+1);
        if (j > 0) {
	    k = gretl_matrix_get(m, i, c);
	    gretl_matrix_set(s, 0, j, 0.0);
	    gretl_matrix_set(s, 1, j, x->val[k]);
	}
    }
    
    return s;
}

gretl_matrix *didx_dx (const gretl_matrix *b,
		       const gretl_matrix *x,
		       const gretl_matrix m)
{
    gretl_matrix *s;
    scalar sj, c, j, k;

    s = gretl_zero_matrix_new(m->rows, 1);

    for (i=0; i<m->rows; i++) {
	if (gretl_matrix_get(m, i, 1) > 0) {
	    /* a dummy, ignore it */
	    continue;
	}
        j = gretl_matrix_get(m, i, 0); /* list position */
	sj = b->val[j]; /* own coefficient */
	k = gretl_matrix_get(m, i, 2);
	if (k > 0) {
	    /* handle squared term */
	    sj += 2 * b->val[k] * x->val[j];
	} else {
	    for (c=3; c<m->cols; c+=2) {
		k = gretl_matrix_get(m, i, c);
		if (k > 0) {
		    /* handle interaction */
		    j = gretl_matrix_get(m, i, c+1);
		    sj += b->[j] * x->[k];
		}
	    }
	}
	s[i] = sj;
    }
    
    return s;
}

gretl_matrix *mlogit_dpj_dx (const gretl_matrix *b,
			     const int *XL,
			     const gretl_matrix *x,
			     int ny,
			     const gretl_matrix *m)
{
    gretl_matrix *p = mlogit_pj(b, x, ny);
    int nb = rows(b) / (ny-1);
    int nd = rows(m);
    gretl_matrix *bbar, *bj, *dp;
    double bb = 0.0;
    int i, l, pos = 1;

    bbar = gretl_zero_matrix_new(nd, 1);
    bj = gretl_zero_matrix_new(nd, ny);
    
    for (l=1; l<ny; l++) {
	for (i=0; i<nd; i++) {
	    bj[i,l] = didx_dx(b->val[pos:pos+nb-1], x, m);
	    bbar += p[l] * bj[,l];
	}
        pos += nb;
    }
    dp = (p' .* (bj .- bbar)');   
   
    for (i=0; i<nd; i++) {
        if (m[i,2] == 1) {
            /* handle dummy variable */
	    gretl_matrix *xd = dumx(m, x, i);
            gretl_matrix *p0 = mlogit_pj(b, xd[1,], ny);
	    gretl_matrix *p1 = mlogit_pj(b, xd[2,], ny);
            dp[,i] = p1 - p0;
	}
    }

    return dp;
}


