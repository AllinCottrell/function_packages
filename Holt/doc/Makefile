DOC = Holt.pdf
SRC = Holt.tex
PIX = Holt_dialog.png output_window.png

$(DOC): $(SRC) $(PIX)
	xelatex $<
	bibtex Holt.aux
	xelatex $<
	xelatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
