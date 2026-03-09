DOC = holt_winters.pdf
SRC = holt_winters.tex

$(DOC): $(SRC)
	pdflatex $<
	bibtex holt_winters.aux
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
