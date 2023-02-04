read a
read b
read c

ans="EQUILATERAL"

if ((a != b || a != c || b != c)); then
    if ((a == b || b == c || c == a)); then
        ans="ISOSCELES"
    else
        ans="SCALENE"
    fi
fi

echo "$ans"
