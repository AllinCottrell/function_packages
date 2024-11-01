DOC = exogtest.pdf
SRC = exogtest.tex

$(DOC): $(SRC) ../exogtest.spec
	pdflatex $<
	bibtex exogtest.aux
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
