PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions
PKG = matrix_perf

INSTALL = /usr/bin/install -c

ifeq ($(INSTALL_DATA),)
  INSTALL_DATA = $(INSTALL) -m 644
endif

matrix_perf.gfn: $(PKG).inp $(PKG).spec $(PKG)_sample.inp $(PKG)_help.md
	gretlcli -b pkg.inp

install: matrix_perf.gfn
	mkdir -p $(DESTDIR)$(GFNDIR)
	$(INSTALL_DATA) matrix_perf.gfn $(DESTDIR)$(GFNDIR)

clean: 
	rm -f matrix_perf.gfn *~

