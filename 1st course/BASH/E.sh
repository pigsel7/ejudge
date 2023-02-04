read a
read b
ans="equal to"

if [ $a -gt $b ]; then
    ans="greater than"
elif [ $a -lt $b ]; then
    ans="less than"
fi

echo "X is $ans Y"
