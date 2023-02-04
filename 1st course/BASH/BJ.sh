#!/bin/bash

read s

n=${#s}

declare -a arr=()


for i in $(seq 0 $(( $n - 1 ))); do
    arr=("${arr[@]}" "${s:$i:1}")           #string to array
done

del=$(( $n - 1 ))

for i in $(seq 0 $(( $n - 2 ))); do
    if (( ${arr[$i]} < ${arr[$(( $i + 1 ))]} ));then
        del=$i
        break
    fi
done

for i in $(seq 0 $(( $n - 1 ))); do
    if (( $i == $del )); then
        continue
    fi
    echo -n "${arr[$i]}"
done

echo ""
