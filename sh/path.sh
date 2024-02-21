#!/bin/bash
read -p "enter the path" p
if [ -e $p ];then
	if [ -f $p ];then
		echo "file exit"
		ls -l $path
	elif [ -d $p ];then
		echo "directory exit"
	         ls -l $path
	else
	echo "path exit but not file n not directory"
	fi
else
	echo "not exist"
fi

