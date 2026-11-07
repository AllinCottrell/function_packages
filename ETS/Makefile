PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = ETS
DOC = doc/ETS.pdf
DATA = alg_exports.gdt auspop.gdt aus_holidays.gdt


$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp ets_gui_help.md
	gretlcli --makepkg $(PKG).inp

$(PKG).zip: $(PKG).gfn $(DOC) $(DATA)
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
