#!/bin/bash

read l r
l=$(( $l - 1 ))

while read n; do
    arr=( "${arr[@]}" "$n" )
done

ans=""

for (( i=0; i<=1001; i++ )); do
    if [[ $i > $l ]]; then
        if [[ $i < $r+1 ]]; then
            if [[ ${ans} == "" ]]; then
                ans="${arr[$i]}"
            else
                ans="${ans} ${arr[$i]}"
            fi
        fi
    fi
done

echo "${ans}"
