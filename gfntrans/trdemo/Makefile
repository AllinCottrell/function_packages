PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
CLI = /home/cottrell/tmp/gretl-git/build/cli/gretlcli
PKG = trdemo

INSTALL = /usr/bin/install -c

ifeq ($(INSTALL_DATA),)
  INSTALL_DATA = $(INSTALL) -m 644
endif

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)_help.txt $(PKG)_sample.inp $(PKG).xml
	$(CLI) --makepkg $(PKG).inp

install: $(PKG).gfn
	$(INSTALL_DATA) $(PKG).gfn $(DESTDIR)$(GFNDIR)

clean: 
	rm -f $(PKG).gfn *~
