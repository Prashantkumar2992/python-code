#!/bin/bash

read -p "enter the number" num
 
rs=$((num % 2))
if [[ $rs == 0 ]];then
	echo "number is even: $num"
else
	echo "number is odd: $num"
fi


