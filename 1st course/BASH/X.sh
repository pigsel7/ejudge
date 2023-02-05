#!/bin/bash

read n

while read s; do

    zeroTo255="[0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]"
    regex1="^(($zeroTo255)\.($zeroTo255)\.($zeroTo255)\.($zeroTo255))$"
    group="[0-9a-fA-F]{1,4}"
    regex2="^($group:$group:$group:$group:$group:$group:$group:$group)$"

    if [[ $s =~ $regex1 ]]; then
        echo "IPv4"
    elif [[ $s =~ $regex2 ]]; then
        echo "IPv6"
    else    
        echo "Neither"
    fi
    
done
