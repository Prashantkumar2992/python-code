def my_tuple_store():
    a=input("enter member separated by space\n")
    turple=a.split(',')
    while(1):
        ch=int(input(print("""  1:  Display elements of the tuple
                                2:  Display third, fourth and fifth element from the collection 
                                3:  Retrieve element at a given subscript
                                4:  Retrieve elements from a given subscript and to a given subscript
                                5:	Find minimum element in the tuple 
                                6:	Reverse elements in the tuple 
                                7:  Exit the Program """)))
        if(ch==1):
            print(turple)
        elif(ch==2):
            print(turple[3:6])
        elif(ch==3):
            print(turple[int(input("enter index\n"))]) 
        elif(ch==4):
            print(turple[int(input("enter starting index\n")):int(input("enter last subcript\n"))])
        elif(ch==5):
            print(min(turple))
        elif(ch==6):
            turple.reverse()
            print(turple)
        elif(ch==7):
            exit
        else:
            print("invalid choice")
            
            
            
            
            
my_tuple_store()