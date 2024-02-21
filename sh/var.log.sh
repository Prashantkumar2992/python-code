#!/bin/bash

for i in /var/log/*;do
	if [[ -f $i ]] && [[ -r $i ]];then
		cmd = $(cat "$i" | wc -l )
		cmd1 = $(echo "$cmd")
		if [[ $cmd1 -ge 100 ]];then
			echo "$i"
		fi
	fi
done

