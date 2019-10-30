#!/usr/bin/env bash

EXECUTABLE=$1
OUTPUT=$($EXECUTABLE 1 2 3)

if [ "$OUTPUT" != "3" ]
then
    exit 1
else
    exit 0
fi