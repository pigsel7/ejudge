#!/bin/bash

read n
for (( i = 0; i < n; i++ )); do
    read s
    t=$t$s
done

t=$(echo $t | sed 's/<\/a>/@/g')                #замена <\a> на @

t=$(echo $t | grep -Eo '<a[^@]*@')              #только <a...>...@

t=$(echo $t | sed 's/\s*<a[^>]href=\"//g')      #удаление___<a ... href=">

t=$(echo $t | sed 's/<[^<>]*>//g')              #удаление всех оставшихся тегов

t=$(echo $t | sed 's/\"[^>]*> */,/g')           #замена (ссылка)|"     >       |(Название) на запятую

t=$(echo $t | sed 's/ *@ */@/g')                #удаление пробелов до и после @(которая раньше была <\a>)


n=${#t}

for (( i = 0; i < n; i++ )); do
    if [[ ${t:i:1} == '@' ]]; then
        echo
    else
        echo -n "${t:i:1}"
    fi
done
