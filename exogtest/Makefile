PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = exogtest
DOC = doc/exogtest.pdf

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp $(PKG)_gui.md
	gretlcli --makepkg $(PKG).inp

$(PKG).zip: $(PKG).gfn $(DOC)
	rm -rf $(PKG) && mkdir $(PKG) && cp $^ $(PKG) && zip -r $@ $(PKG)

$(DOC):
	make -C doc

install: $(PKG).gfn $(DOC)
	mkdir -p $(GFNDIR)/$(PKG) && install -m 644 $^ $(GFNDIR)/$(PKG)

check: $(PKG).gfn $(PKG)_sample.inp
	gretlcli -b $(PKG)_sample.inp > newout/$(PKG)_sample.out
	gretlcli -b stata_example.inp > newout/stata_example.out
	diff -ur output newout

clean : 
	rm -f $(PKG).gfn $(PKG).zip *~
	rm -rf $(PKG)
	make -C doc clean

