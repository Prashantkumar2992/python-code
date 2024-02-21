#!/bin/bash

echo "1.make a file
      2.display content
      3.copy the file
      4.rename the file
      5.delete the file
      6.exit"
read -p "enter your choice" ch
 if [[ $ch == "1" ]];then
	 read -p "enter file name" file
	 touch $file
 elif [[ $ch == "2" ]];then
	 
     read -p "enter file name" file
     cat $file
elif [[ $ch == "3" ]];then
  read -p "enter file name source " file
  read -p "enter file name destination " file1
   cp $file $file1
   elif [[ $ch == "4" ]];then

  read -p "enter file name" file

  read -p "enter file new name" file1
   mv $file $file1
elif [[ $ch == "5" ]];then
	
  read -p "enter file name" file
   rm $file

else
	exit
 fi











