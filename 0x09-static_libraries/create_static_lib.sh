#!/bin/bash

gcc -c *.c

ar rcs liball.a *.o

rm *.o

echo "Static library liball.a created."
