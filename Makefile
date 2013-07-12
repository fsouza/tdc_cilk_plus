# Copyright 2013 Francisco Souza. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

CC=icc
CXX=icc
CFLAGS=-w3 -Werror
CXXFLAGS=$(CFLAGS)

.SUFFIXES: .f90

.f90:
	ifort -e95 -o $@ $<

.f:
	ifort -o $@ $<
