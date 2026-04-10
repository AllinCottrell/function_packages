DOC = Winters.pdf
SRC = Winters.tex

$(DOC): $(SRC)
	xelatex $<
	bibtex Winters.aux
	xelatex $<
	xelatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
