PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = random_forest
DOC = doc/random_forest.pdf
DATA = titanic3.gdt

$(PKG).zip: $(PKG).gfn doc/$(PKG).pdf titanic.gdt
	rm -rf $(PKG) && mkdir $(PKG) && cp $^ $(PKG) && zip -r $@ $(PKG)

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp
	gretlcli --makepkg $(PKG).inp

$(DOC):
	make -C doc

install: $(PKG).gfn $(DOC) $(DATA)
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $^ $(GFNDIR)/$(PKG)

install-gfn: $(PKG).gfn
	install -m 644 $< $(GFNDIR)/$(PKG)

clean: 
	rm -f $(PKG).pdf $(PKG).gfn $(PKG).zip *~
	rm -rf random_forest
	make -C doc clean

