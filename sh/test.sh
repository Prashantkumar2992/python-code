#!/bin/bash

sum=0
count=0
for i in $(awk -F: '{print $4}' data.txt);
do
    sum=$(expr $sum + $i)
    count=$(expr $count + 1)
done

echo "$sum"
echo "$count"
echo "average: $(expr $sum / $count)"

read -p "Enter name: " name
cmd=$(awk -F: '{print $1, $4}' data.txt | grep $name)


cmd3=$(echo $cmd > fileTest)
$cmd3
cmd2=$(awk  '{print $2}' fileTest)

echo $cmd2


