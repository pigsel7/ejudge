#!/bin/bash


read n

while read c
do
    i=$(( $c - 1 ))
    string=$c
    
    while [[ $i > 0 ]]
    do
        string="${string}*${i}"
        i=$(( $i - 1 ))
    
    done
        
        export BC_LINE_LENGTH=0
        echo "$string" | bc
    
done
