#!/bin/bash

cmd= $(whoami)
cmd1= $(ls -u $cmd)
echo "welcome $cmd $cmd1"
 
echo "1.add user 
      2.list number of items users home dir
      3.check permission
      4.list process
      5.exit"

read -p "enter your choice" ch
if [[ $ch == "1" ]];then

  read -p "enter user name" user
   sudo  useradd $user
elif [[ $ch == "2" ]];then
	ls ~/
elif [[ $ch == "3" ]];then
ls -l ~/
elif [[ $ch == "4" ]];then
	ps
elif [[ $ch == "5" ]];then

	exit
else 
	echo "invalid choice"
fi






