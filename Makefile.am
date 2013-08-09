AUTOMAKE_OPTIONS = gnu

lib_LTLIBRARIES = libkomplex.la

libkomplex_la_SOURCES = complex.cpp

include_HEADERS = complex.h

libkomplex_la_LDFLAGS = -version-info 0:9:0

noinst_PROGRAMS = t
t_SOURCES = t.cpp

ACLOCAL_AMFLAGS = -I m4 
AM_LDFLAGS = -lm -lkomplex