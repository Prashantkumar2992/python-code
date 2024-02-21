#!/bin/bash

a=$1
b=$2
op=$3

if [ $op != "+" ] && [ $op != "-"];then
	echo "invalid argument"
fi
if [ $op == "+" ];then
	res=$((a + b))
else
	res=$((a - b))
fi

echo "$a $op $b = $res"


