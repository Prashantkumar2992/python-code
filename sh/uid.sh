#!/bin/bash

read -p "enter user name" user
id $user $> /dev/null
if [ $? == 0 ];then
	id $user
else 
	adduser $user
fi
