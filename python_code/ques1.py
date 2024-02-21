

def my_list_store():
    list = []
    for n in range(0,int(input("enter number of element\n"))):
        list.append(input("enter the member\n"))
   
    while(1):
        ch=int(input(print("""  1:  Display number of elements in the members list
                                2:  Add an element to the members collection like 'Sehwag' 
                                3:  Add elements to the members collection like ['David','Bret','Sanju']
                                4:  Remove a member from the collection at a given subscript
                                5:  Remove the last member from the collection 
                                6:  Display third, fourth and fifth element from the collect
                                7:  exit\n""" )))
        if(ch==1):
            print("list: ", list)
        elif(ch==2):
            list.append(input("enter memberlist\n"))
        elif(ch==3):
           for n in range(0,int(input("enter number of element\n"))):
            list.append(input("enter the member\n"))
        elif(ch==4):
            list.pop(int(input("enter the index\n")))
        elif(ch==5):
            list.pop()
        elif(ch==6):
            print(list[3:6])
        elif(ch==7):
            exit
        else:
            print("invalid choice")
            
my_list_store()        