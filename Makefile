#makefile for argparser library#
#
# This isnt really a library, but just a couple of functions #
# that will save you some time in parsing your argv variables#
# just compile with an include "argparser.h" and link it with#
# the object file produced by running "make". Good luck!     #
# Copyright © 2012 phyrrus9 <phyrrus9@gmail.com> open source #
all: clean
	g++ -c argparser.cpp -o argparser.o
clean:
	rm argparser.o
