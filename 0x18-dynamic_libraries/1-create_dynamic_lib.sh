#!/bin/bash
gcc -fPIC -c "$file" *.c
gcc -shared -o liball.so *.o

