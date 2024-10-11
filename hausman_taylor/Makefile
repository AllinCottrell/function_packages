PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = hausman_taylor
DOC = doc/hausman_taylor.pdf
DATA = PSID7682.gdt

$(PKG).gfn: $(PKG).inp $(PKG).spec ht_sample.inp
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

