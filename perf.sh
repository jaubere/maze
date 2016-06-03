#!/bin/bash

echo "how many time?"

MAP1=$1
MAP2=$2

if [ -f "$MAP1" ] && [ -f "$MAP2" ]
then
echo "let's go !"

MAP1=$1
echo "first map solved : $MAP1"
time ./profondeur/solver $MAP1 > file

echo

MAP2=$2
echo "second map solved : $MAP2"
time ./profondeur/solver $MAP2 > file2

rm file
rm file2

elif [ -f "$MAP1" ]
then
echo "only one map"
echo "let's go !"
time ./profondeur/solver $MAP1 > file
rm file

else
    echo "no file detected or wrong file"
fi

