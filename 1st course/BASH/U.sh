#!/bin/bash
read regex
regex=$(echo "^($regex)$")

while read string
do
    if [[ $string =~ $regex ]]
    then
        echo "YES"
    else
        echo "NO"
    fi
done
