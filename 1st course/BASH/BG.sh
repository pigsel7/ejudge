#!/bin/bash
read T

while read n
do
    read s
    declare -a arr=($s)
    
    for i in $(seq 0 $(( $n - 1 )))
    do
        if (( $i < (( $n/2 )) ))
        then
            for j in $(seq $(( $i + 1 )) $(($n/2 - 1)))
            do
                if (( ${arr[i]} > ${arr[j]} ))
                then
                    tmp=${arr[i]}
                    arr[i]=${arr[j]}
                    arr[j]=$tmp
                fi
            done
        else
            if (( $i == (( ($n - 1)/2 )) ))
            then
                continue
            fi
            
            for k in $(seq $(( i + 1 )) $((n - 1)))
            do
                if (( ${arr[i]} < ${arr[k]} ))
                then
                    tmp=${arr[i]}
                    arr[i]=${arr[k]}
                    arr[k]=$tmp
                fi
            done
        fi
    done
    
    for item in ${arr[@]}
    do
        echo "$item"
    done
done
