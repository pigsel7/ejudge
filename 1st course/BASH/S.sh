#!/bin/bash
n=0

while read line
do
    arr=( "${arr[@]}" "$line" )
    n=$(( $n + 1 ))
done

n=$(( $n-1 ))

for i in $(seq 0 $n)
do
    string=${arr[$i]}
    revers=$(echo $string | rev)
    
    if [[ $string == $revers ]]
    then
        echo "$string"
    fi
done
