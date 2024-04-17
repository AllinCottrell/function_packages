for f in *.inp ; do
  echo "$f"
  if grep 'lp-mfx.gfn' $f > /dev/null ; then
    cat $f | sed s+lp-mfx.gfn+../lp-mfx.inp+ > tmpfoo && mv tmpfoo $f
  fi
done
