#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([complexlib], [0.9.0], [hutt at ieee dot org])
AC_CONFIG_SRCDIR([complex.h])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE(libcomplex,0.9.0)
AC_CONFIG_MACRO_DIR([m4])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AM_PROG_LIBTOOL

# Checks for libraries.
AC_CHECK_LIB(m,pow)

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_FUNCS([pow sqrt])

AC_OUTPUT(Makefile)
LT_INIT
