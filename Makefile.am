lib_LTLIBRARIES = libadpcm.la

libadpcm_la_SOURCES = \
		dvi_adpcm.c  \
		libadpcm.c

libadpcm_la_CFLAGS = -fvisibility=hidden -Wall
libadpcm_la_LDFLAGS = -version-info 0:0:0

include_HEADERS = adpcm.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libadpcm.pc
