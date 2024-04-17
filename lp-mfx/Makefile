PKG = lp-mfx
PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKGDIR = $(GFNDIR)/$(PKG)

INSTALL = /usr/bin/install -c

ifeq ($(INSTALL_DATA),)
  INSTALL_DATA = $(INSTALL) -m 644
endif

$(PKG).gfn: $(PKG).inp $(PKG).spec $(PKG)-sample.inp
	gretlcli -b makepkg.inp

$(PKG).pdf:
	make -C doc

zipfile: $(PKG).gfn $(PKG).pdf
	rm -rf ./$(PKG) && mkdir ./$(PKG) && \
	cp $(PKG).gfn doc/$(PKG).pdf ./$(PKG)/ && \
	zip -r $(PKG).zip $(PKG)

install: $(PKG).gfn doc/$(PKG).pdf
	mkdir -p $(DESTDIR)$(PKGDIR)
	$(INSTALL_DATA) $(PKG).gfn $(DESTDIR)$(PKGDIR)
	$(INSTALL_DATA) doc/$(PKG).pdf $(DESTDIR)$(PKGDIR)

clean: 
	rm -f $(PKG).gfn doc/$(PKG).pdf $(PKG).zip *~
	rm -rf ./$(PKG)
