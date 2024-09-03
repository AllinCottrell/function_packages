DOC = almonreg.pdf
SRC = almonreg.tex

$(DOC): $(SRC) mycode.sty almonreg.png ../almonreg.spec
	pdflatex $<
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *~ $(DOC)
