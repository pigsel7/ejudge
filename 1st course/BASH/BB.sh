#!/bin/bash

read n

t=""

for (( i = 0; i < n; i++ )); do
    read s
    t="$t .$s."       
done

t=$(echo $t | sed 's/[^A-Za-z0-9_]/../g')


read m

for (( i = 0; i < m; i++ )); do
    read s
    echo $(echo $t | grep -Eo "[^A-Za-z0-9_]$s[^A-Za-z0-9_]" | wc -w)
done
