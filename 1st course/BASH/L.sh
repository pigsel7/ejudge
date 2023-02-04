while read n
do
    arr=( "${arr[@]}" "$n" )
    
done

echo "${arr[@]}"
