#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o 1-create_dynamic_lib.sh *.o
