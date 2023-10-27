#!/bin/bash

gcc -c ./*.c
ar r libball.a ./*.o
