DOC = almonreg.pdf
SRC = almonreg.tex

$(DOC): $(SRC) mycode.sty almonreg.png ../almonreg.spec
	pdflatex $<
	bibtex almonreg.aux
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
