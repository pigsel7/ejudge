#!/bin/bash

read n

for (( i = 0; i < n; i++ )); do
    read s
    s=$(echo $s | grep -Eo '[a-zA-Z0-9][a-zA-Z0-9._-]*[a-zA-Z0-9]@[a-zA-Z0-9.]+\.[a-zA-Z]{2,4}')
    t="$t $s"
done

arr=( $t )

count=$(echo $t | wc -w) #word counter -word / -lines..



#сортировка
for (( i=0; i < count; i++ )); do
    for (( j=$i; j < count; j++ )); do
        if [[ ${arr[$i]} > ${arr[$j]} ]]; then
            tmp=${arr[$i]}
            arr[$i]=${arr[$j]}
            arr[$j]=$tmp
        fi
    done
done

#вывод
for (( i=0; i < count; i++ )); do
    if [[ $i == 0 ]]; then
        echo -n ${arr[$i]}
    elif [[ ${arr[$i]} != ${arr[$i-1]} ]]; then
        echo -n ";${arr[$i]}"
    fi
done

echo
