#!/bin/bash
# gcc -c -Fpic *.c
# gcc -shared -o liball.so *.o
gcc -fPIC -c *.c
gcc -shared *.o -o liball.so