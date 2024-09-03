PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = almonreg
DOC = doc/almonreg.pdf
DATA = almon.gdt

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp
	gretlcli --makepkg $(PKG).inp

$(PKG).zip: $(PKG).gfn $(DOC) $(DATA)
	rm -rf $(PKG) && mkdir $(PKG) && cp $^ $(PKG) && zip -r $@ $(PKG)

$(DOC):
	make -C doc

install: $(PKG).gfn $(DOC) $(DATA)
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $^ $(GFNDIR)/$(PKG)

clean : 
	rm -f $(PKG).gfn $(PKG).zip *~
	rm -rf $(PKG)
	make -C doc clean

