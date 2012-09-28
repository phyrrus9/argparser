/*
 * argparser library header file
 * copyright © 2012 phyrrus9 @phyrrus9 <phyrrus9@gmail.com>
 * this library is open source, feel free to do whatever you
 * want with it, I do not honestly care, it took me about 5
 * minutes of coding to write this, then work out all of the
 * bugs, so you stealing my code is not a problem for me. See
 * Makefile for build and compile instructions. Feel free to
 * email me with comments, questions, concerns, PROJECT IDEAS
 * or whatever else you feel like spilling at me.
 */
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

void parse(int argc, char * * argv, int num, char * flags, bool * options);
void parse(int argc, char * * argv, int num, char * flags, string * options);
