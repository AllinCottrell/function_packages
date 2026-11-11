PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = ETS
DOC = doc/ETS.pdf

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp ets_gui_help.md
	gretlcli --makepkg $(PKG).inp

$(PKG).zip: $(PKG).gfn $(DOC)
	rm -rf $(PKG) && mkdir -p $(PKG)/examples
	cp $^ $(PKG) && cp -a examples/*.* $(PKG)/examples/
	zip -r $@ $(PKG)

$(DOC):
	make -C doc

install: $(PKG).gfn $(DOC)
	mkdir -p $(GFNDIR)/$(PKG)/examples
	install -m 644 $^ $(GFNDIR)/$(PKG)/
	install -m 644 examples/*.* $(GFNDIR)/$(PKG)/examples/

install-gfn: $(PKG).gfn
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $< $(GFNDIR)/$(PKG)

clean :
	rm -f $(PKG).gfn $(PKG).zip *~
	rm -rf $(PKG)
	make -C doc clean
