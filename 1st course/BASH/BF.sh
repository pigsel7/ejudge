#!/bin/bash
read n
read s

declare -a arr=($s)

ans=0
count=0

for item1 in ${arr[@]}
do
    for item2 in ${arr[@]}
    do
        if (( $item1 == $item2 ))
        then
            (( count++ ))
        fi
    done
    
    if (( $count > $ans ))
    then
        ans=$count
    fi
    
    count=0
    
done

echo "$ans"
