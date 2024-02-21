def my_string_store():
    
        
        strput = input("Please enter a string that you would want to perform Operation Upon ")
        while(1):
            ch=int(input(""" 1:  Display the string
                         2:  Display third, fourth and fifth element from the string 
                         3:  Retrieve element at a given subscript
                         4:  Retrieve elements from a given subscript and to a given subscript
                         5:	 Find minimum character in the string 
                         6:	 Reverse the string 
                         7:	 Output list of tuple( character,count) for each characters of the string 
                         8:	 Output list of characters of the string that appear more than once 
                         9:  Check if the string is a palindrome and return output message accordingly
                         10: Exit the Program\n"""))
            if(ch==1):
                print(strput)
            elif(ch==2):
                print(strput[3:6])
            elif(ch==3):
                print(strput[int(input("enter index\n"))])
            elif(ch==4):
                print(strput[int(input("enter starting index\n")):int(input("enter ending index\n"))])
            elif(ch==5):
                print(min(strput))
            elif(ch==6):
                
                print(strput[-1,(len(strput)+1)*-1,-1], end="")
            elif(ch==7):
                for i in strput:
                    print(f" {i} {strput.count(i)}")
            elif(ch==8):
                for i in strput:
                    if(strput.count(i)>1):
                        print(f"{i} more than one times" )
            elif(ch==9):
                rev=""
                for i in strput:
                    rev=i+rev
                    
                    if(strput==rev):
                        print(rev)
                        print("string is palidrome\n")
                    else:
                        print(rev)
                        print("the string is palidrome\n")
            else:
                print("invalid choice")






my_string_store()                
                        
                    