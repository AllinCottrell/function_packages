DOC = ordered_predict.pdf
SRC = ordered_predict.tex
# PIX = ordered_predict_dialog.png output_window.png

$(DOC): $(SRC)
	xelatex $<
	xelatex $<

clean:
	rm -f *.aux *.log *.out *~ $(DOC)
