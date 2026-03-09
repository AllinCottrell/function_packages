DOC = holt_winters.pdf
SRC = holt_winters.tex

$(DOC): $(SRC) holt_winters.tex
	pdflatex $<
	bibtex holt_winters.aux
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
