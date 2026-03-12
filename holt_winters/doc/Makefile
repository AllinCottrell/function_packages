DOC = holt_winters.pdf
SRC = holt_winters.tex

$(DOC): $(SRC)
	xelatex $<
	bibtex holt_winters.aux
	xelatex $<
	xelatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
