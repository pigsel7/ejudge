#!/bin/bash
read n
read s
declare -a arr=( $s )

n=$(( $n-1 ))

for i in $(seq 0 $n)
do  
    tmp=${arr[$i]}
    if [[ $tmp != "none" ]]
    then
        for j in $(seq $(( $i + 1 )) $n)
        do
            if [[ ${arr[$j]} != $tmp ]]
            then
                if [[ $j == $n ]]
                then
                    echo "$tmp"
                    exit
                fi
            else
                arr[$j]="none"
                break
            fi
        done
    fi
done

echo "${arr[$n]}"
