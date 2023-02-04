#!/bin/bash
read a
read b

if [[ $a =~ "$b" ]]
then
    echo "YES"
else
    echo "NO"
fi
