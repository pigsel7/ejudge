#!/bin/bash
while read line
do
    arr=( "${arr[@]}" "$line" )
done

n=${#arr[@]}

flag=0

for i in $(seq 0 $(( $n - 1 )))
do
    ans=`echo -n "${arr[$i]}" | grep -E "[aA]"`
    if [[ $ans == "" ]]
    then
        if [ $flag == 0 ]
        then
            echo -n "${arr[$i]}"
        else
            echo -n " ${arr[$i]}"
        fi
        flag=1
    fi
    
done

if [ $flag == 1 ]
then
    echo ""
fi
