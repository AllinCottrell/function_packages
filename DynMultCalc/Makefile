PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = DynMultCalc
DOC = doc/$(PKG).pdf

$(PKG).zip: $(PKG).gfn $(DOC)
	rm -rf $(PKG) && mkdir $(PKG) && cp $^ $(PKG) && zip -r $@ $(PKG)

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp
	gretlcli --makepkg $(PKG).inp

$(DOC):
	make -C doc

install: $(PKG).gfn $(DOC)
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $^ $(GFNDIR)/$(PKG)

install-gfn: $(PKG).gfn
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $< $(GFNDIR)/$(PKG)

install-local: $(PKG).zip
	echo pkg install $(PKG).zip --local | gretlcli -b -

clean: 
	rm -f $(PKG).gfn $(PKG).zip *~

distclean: clean
	rm -rf $(PKG)
	make -C doc clean

