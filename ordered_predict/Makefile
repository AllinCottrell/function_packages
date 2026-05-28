PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = ordered_predict
DOC = doc/ordered_predict.pdf

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp
	gretlcli --makepkg $(PKG).inp

$(PKG).zip: $(PKG).gfn $(PKG).pdf
	rm -rf ./$(PKG) && mkdir ./$(PKG) && \
	cp $(PKG).gfn $(PKG).pdf ./$(PKG)/ && \
	zip -r $(PKG).zip $(PKG)

$(DOC):
	make -C doc

install: $(PKG).gfn $(DOC)
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $^ $(GFNDIR)/$(PKG)

clean: 
	rm -f $(PKG).gfn $(PKG).zip *~
	rm -rf ./$(PKG)
	make -C doc clean
