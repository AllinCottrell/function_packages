FIGS = GUI_main.png modelwin.png cm_example.pdf m_example.pdf
SRC = DynMultCalc.tex DynMultCalc.bib

DynMultCalc.pdf: DynMultCalc.aux
	bibtex DynMultCalc.aux
	pdflatex DynMultCalc.tex
	pdflatex DynMultCalc.tex

DynMultCalc.aux: $(SRC) $(FIGS)
	pdflatex DynMultCalc.tex

clean:
	rm -f DynMultCalc.pdf *.aux *.log *.bbl *.blg
