#!/bin/bash

read s
n=${#s}

for i in $(seq 10)
do
    ans=`expr index "$s" $(( 10 - $i ))`
    if (( $ans != 0 ))
    then
        break
    fi
done



if (( $ans <= $n/2 ))
then
    echo "-1"
elif (( n % 2 == 1 )) && (( ans == (n + 1)/2 ))
then
    echo "0"
else 
    echo "1"
fi
