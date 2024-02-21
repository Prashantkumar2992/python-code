#!/bin/bash
read -p "the fabonacci series to be print" nu

a=0
b=1
 for((i=0; i<=nu; i++))
 do
	 echo -n "$a "
	 fn=$((a+b))
	 a=$b
	 b=$fn
 done

