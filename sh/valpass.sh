#!/bin/bash

echo "Enter the password"

read pass

c= `echo ${#pass}`
 if [[ $c -ne "8" ]];then 
	 echo "invalid password"
	 exit 1
 fi
 echo "$pass"
 echo $c | grep "[a-z]" |grep "[A-Z]"|grep "[0-9]"|grep "[@#$%^&*]"

 if [[ $? -ne  "0" ]];then

	 echo "password weak"
	 exit 2

 else

 echo "strong passwd"
exit

 fi
