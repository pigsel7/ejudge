#!/bin/bash

read n

for (( i = 0; i < n; i++ )); do
    read s
    arr=( "${arr[@]}" "$s" )
done

ans=0
read m

while read s; do
    for (( i = 0; i < n; i++ )); do
        tmp=$(echo ${arr[$i]} | grep -o "[A-Za-z0-9_]$s[A-Za-z0-9_]" | wc -l)
        ans=$(( ans + tmp ))
    done
    
    echo $ans
    ans=0
done
