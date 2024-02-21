#!/bin/bash

echo "Enter the password"

read pass

c=`echo ${#pass}`
 if [[ $c -ne "8" ]];then
         echo "invalid password"
         exit
 fi
 echo $pass | grep "[a-z]" |grep "[A-Z]"|grep "[0-9]"|grep "[@#$%^&*]"

 if [[ $? -ne  "0" ]];then

         echo "password weak"
         exit

 else 
	 echo "strong password"
	 exit
 fi

