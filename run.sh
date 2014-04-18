#!/bin/bash

rm a.out
g++ -O3 -march=native -W -Wall -Wextra -pedantic -std=c++0x $1  && ./a.out
