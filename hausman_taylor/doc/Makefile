DOC = hausman_taylor.pdf
SRC = hausman_taylor.tex


$(DOC): $(SRC) ../hausman_taylor.spec means.tex sds.tex
	pdflatex $<
	bibtex hausman_taylor.aux
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
