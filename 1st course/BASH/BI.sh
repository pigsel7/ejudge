#!/bin/bash

read s

n=${#s}

declare -a arr=()


for i in $(seq 0 $(( $n - 1 ))); do
    arr=("${arr[@]}" "${s:$i:1}")           #string to array
done

arr2=(${arr[@]})


for i in $(seq 0 $(( $n - 1 ))); do
    for j in $(seq $(( $i + 1 )) $(( $n - 1 ))); do
        if (( ${arr[$i]} > ${arr[$j]} )); then
            tmp=${arr[$i]}
            arr[$i]=${arr[$j]}
            arr[$j]=$tmp
        fi
    done
done

del=${arr[$(( $(( $n - 1 ))/2 ))]}


echo "$del"

count=0

for i in $(seq 0 $(( $n - 1 ))); do
    if (( ${arr2[$i]} == $del )); then
        continue
    fi
    echo -n "${arr2[$i]}"
    
    count=$(( $count + 1 ))
done

if (( $count == 0 )); then
    echo "NULL"
    exit
fi

echo ""
