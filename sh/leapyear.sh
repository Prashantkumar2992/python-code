#!/bin/bash

read -p "enter the year" yr

rs=$((yr % 4))
if [[ $rs == 0 ]];then
	echo "year: $yr is leap year"
else
	echo "year: $yr is not leap year"
fi
