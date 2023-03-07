#!/bin/bash

read n

for (( i = 0; i < n; i++ )); do
    read s
    s=$(echo $s | sed 's/<\s*/</g')
    s=$(echo $s | grep -Eo '<[^/> ]+')
    s=$(echo $s | sed 's/<//g')
    t="$t $s"
done


arr=( $t )
count=$(echo $t | wc -w)

for (( i=0; i < count; i++ )); do
    for (( j=$i; j < count; j++ )); do
        if [[ ${arr[$i]} > ${arr[$j]} ]]; then
            tmp=${arr[$i]}
            arr[$i]=${arr[$j]}
            arr[$j]=$tmp
        fi
    done
done

for (( i=0; i < count; i++ )); do
    if [[ $i == 0 ]]; then
        echo -n ${arr[0]}
    elif [[ ${arr[$i]} != ${arr[$i-1]} ]]; then
        echo -n ";${arr[$i]}"
    fi
done

echo
