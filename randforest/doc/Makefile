DOC = random_forest.pdf
SRC = random_forest.tex

$(DOC): $(SRC) mycode.sty rfgui.png ../random_forest.spec
	pdflatex $<
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *~ $(DOC)
