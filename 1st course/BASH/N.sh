count=0
while read n
do
    count=$(( $count+1 ))
done

echo "$count"
