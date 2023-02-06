DOC = random_forest.pdf
SRC = random_forest.tex

$(DOC): $(SRC) mycode.sty
	pdflatex $<
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *~ $(DOC)
