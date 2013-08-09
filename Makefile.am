AUTOMAKE_OPTIONS = gnu

lib_LTLIBRARIES = libcomplex.la

libcomplex_la_SOURCES = complex.cpp

include_HEADERS = complex.h

libcomplex_la_LDFLAGS = -version-info 0:9:0 -L/usr/local/lib

noinst_PROGRAMS = test_complexlib

test_complexlib_SOURCES = $(libcomplex_la_SOURCES) test_complexlib.cpp
test_complexlib_CXXFLAGS = $(libcomplex_la_CXXFLAGS)
test_complexlib_LDADD    = $(libcomplex_la_LIBADD) -lgtest -lgtest_main -lpthread

TESTS = test_complexlib

ACLOCAL_AMFLAGS = -I m4 
AM_LDFLAGS = -lm -lcomplex
