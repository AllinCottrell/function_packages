FIGS = GUI_main.png modelwin.png irf_example.pdf m_example.pdf
SRC = DynMultCalc.tex DynMultCalc.bib

DynMultCalc.pdf: $(SRC) $(FIGS)
	pdflatex DynMultCalc.tex
	pdflatex DynMultCalc.tex
	bibtex DynMultCalc.aux
	pdflatex DynMultCalc.tex
	pdflatex DynMultCalc.tex
	
clean:
	rm -f DynMultCalc.pdf *.aux *.log *.bbl *.blg
