PREFIX = $(shell pkg-config --variable=prefix gretl)
GFNDIR = $(PREFIX)/share/gretl/functions

INSTALL = /usr/bin/install -c

ifeq ($(INSTALL_DATA),)
  INSTALL_DATA = $(INSTALL) -m 644
endif

bandplot.gfn: bandplot.inp bandplot.spec bandplot.help bpgui.help enroll.inp
	gretlcli --makepkg bandplot.inp

install: bandplot.gfn
	$(INSTALL_DATA) bandplot.gfn $(DESTDIR)$(GFNDIR)

clean: 
	rm -f bandplot.gfn *~

