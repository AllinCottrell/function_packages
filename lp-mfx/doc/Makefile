DOC = lp-mfx.pdf
SRC = lp-mfx.tex

$(DOC): $(SRC) pkgheads.sty
	pdflatex $<
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *~ $(DOC)
