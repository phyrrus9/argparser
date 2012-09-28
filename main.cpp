/*
 * argparser library test file
 * copyright © 2012 phyrrus9 @phyrrus9 <phyrrus9@gmail.com>
 * this file tests out some stuff, using bool values, and
 * string options, so segfaults are likely, write your own
 * test code if you don't understand mine.
 * this library is open source, feel free to do whatever you
 * want with it, I do not honestly care, it took me about 5
 * minutes of coding to write this, then work out all of the     
 * bugs, so you stealing my code is not a problem for me. See
 * Makefile for build and compile instructions. Feel free to
 * email me with comments, questions, concerns, PROJECT IDEAS
 * or whatever else you feel like spilling at me.
 */

#include "argparser.h"

int main(int argc, char *argv[])
{
    char *flags = new char[6];
    strcpy(flags,"abcdef");
    bool *options = new bool[6];
    for (int i = 0; i < 6; i++)
        options[i] = false;
    parse(argc, argv, 6, flags, options);
    for (int i = 0; i < 6; i++)
        cout << options[i];
    cout << endl;
    string *options_ = new string[6];
    for (int i = 0; i < 6; i++)
        options_[i] = "empty";
    parse(argc, argv, 6, flags, options_);
    for (int i = 0; i < 6; i++)
        cout << options_[i].c_str() << " ";
    cout << endl;
}
