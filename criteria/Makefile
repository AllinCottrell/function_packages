PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions

INSTALL = /usr/bin/install -c

PKG = criteria

ifeq ($(INSTALL_DATA),)
  INSTALL_DATA = $(INSTALL) -m 644
endif

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp $(PKG)_help.txt
	gretlcli --makepkg $(PKG).inp

install: $(PKG).gfn
	$(INSTALL_DATA) $(PKG).gfn $(DESTDIR)$(GFNDIR)

clean: 
	rm -f $(PKG).gfn *~

