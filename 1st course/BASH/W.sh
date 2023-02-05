#!/bin/bash

read n

while read s; do

    regex="^([\._][0-9]+[a-zA-Z]*_?)$"

    if [[ $s =~ $regex ]]; then
        echo "VALID"
    else
        echo "INVALID"
    fi
    
done
