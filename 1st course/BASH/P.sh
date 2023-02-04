#!/bin/bash
while read n
do
    arr=( "${arr[@]}" "$n" )
done

m=${#arr[@]}

m=$(( $m - 1 ))

for i in $(seq 0 $m);
do
    if [[ ${arr[$i]:0:1} == [A-Z] ]]
    then
        if [ "$i" = "0" ]
        then
            echo -n ".${arr[$i]:1:${#arr[$i]}}"
        else
            echo -n " .${arr[$i]:1:${#arr[$i]}}"
        fi
    else
        if [ "$i" = "0" ]
        then
            echo -n "${arr[$i]:0:${#arr[$i]}}"
        else
            echo -n " ${arr[$i]:0:${#arr[$i]}}"
        fi
    fi
        
    
done
