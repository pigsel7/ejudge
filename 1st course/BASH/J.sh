read n
sum=0
for (( i=0; i<n; i++ ))
do
    read c
    sum=$(( $sum+$c ))
done

ans=$(echo "scale=10; $sum/$n" | bc)
printf "%.3f" "$ans"
