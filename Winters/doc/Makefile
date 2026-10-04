DOC = Winters.pdf
SRC = Winters.tex
PIX = Winters_dialog.png output_window.png

$(DOC): $(SRC) $(PIX)
	xelatex $<
	bibtex Winters.aux
	xelatex $<
	xelatex $<

clean:
	rm -f *.aux *.log *.out *.bbl *.blg *~ $(DOC)
