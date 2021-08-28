#!/bin/bash

# remove all executable files
for file in $(ls)
do
  if [ -x $file ]
  then
    echo $file
    rm -rf $file
  fi
done