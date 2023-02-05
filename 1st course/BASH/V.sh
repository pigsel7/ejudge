#!/bin/bash

read n

while read s; do

    regex="^([a-zA-Z0-9][a-zA-Z0-9\._\-]*?[a-zA-Z0-9]@[a-zA-Z0-9]+\.[a-zA-Z][a-zA-Z][a-zA-Z]?[a-zA-Z]?)$"

    if [[ $s =~ $regex ]]; then
        echo "YES"
    else
        echo "NO"
    fi
    
done
