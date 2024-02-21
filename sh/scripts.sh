#!/bin/bash

#dir = $1
#read file
#for file in `ls $1/*`
#do 
#	mv $file $file.new.txt
#done
if  [[ $# -ne 1 ]]
then 
	echo "please provide the correct inpput in the below format "
	echo "usage: $0 number"
	echo "this scri[pt will give the reverse number"
	exit 1
fi
n=$1
rev=0
sd=0
while [[ $n -gt 0 ]]
do 
	sd=`expr $n % 10`
	rev=`expr $rev \* 10 + $sd`
	n=`expr $n  / 10`

done

echo "reverse number is $rev"

