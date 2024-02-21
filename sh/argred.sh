#!/bin/bash
a=$1

if [ -e $a ];then
	echo "redhat|fedora"
fi
if [[ $a = "fedora" ]];then
	echo "redhat"
elif [[ $a = "redhat" ]];then
	echo "fedora"
fi
