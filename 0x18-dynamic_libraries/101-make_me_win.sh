#!/bin/bash
gcc -fPIC -shared -o mylibrary.so pick_numbers.c
LD_PRELOAD=./mylibrary.so ./gm 9 8 10 24 75 9
