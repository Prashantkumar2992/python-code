#!/bin/bash
read -p "enter the username" user
id $user &> /dev/null
 if [ $? == 0 ];then
	 id $user
 else
	 useradd $user
 fi
