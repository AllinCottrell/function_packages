PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = Holt
DOC = doc/Holt.pdf
DATA = auspop.gdt

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp
	gretlcli --makepkg $(PKG).inp

$(PKG).zip: $(PKG).gfn $(DOC)
	rm -rf $(PKG) && mkdir $(PKG) && cp $^ $(PKG) && zip -r $@ $(PKG)

$(DOC):
	make -C doc

install: $(PKG).gfn $(DOC) $(DATA)
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $^ $(GFNDIR)/$(PKG)

install-gfn: $(PKG).gfn
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $< $(GFNDIR)/$(PKG)

clean : 
	rm -f $(PKG).gfn $(PKG).zip *~
	rm -rf $(PKG)
	make -C doc clean

