PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = suradf

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp $(PKG)_help.txt
	gretlcli --makepkg $(PKG).inp

install: $(PKG).gfn
	mkdir -p $(GFNDIR) && install -m 644 $< $(GFNDIR)

clean : 
	rm -f $(PKG).gfn *~

