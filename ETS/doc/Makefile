DOC = ETS.pdf
SRC = ETS.tex
PIX = $(wildcard ETS_dialog.png output_window.png)

$(DOC): $(SRC) $(PIX)
	xelatex $<
	bibtex ETS.aux
	xelatex $<
	xelatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
