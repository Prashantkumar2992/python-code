def ba():
    l1=[]
    for i in range(0,int(input("enter the number of element"))):
        l1.append(input("the element to be add"))
    
    
    while(1):
        ch=int(input(print(''' 1:  Display number of elements in the members list
                                2:  Add an element to the members collection like 'Sehwag' 
                                3:  Add elements to the members collection like ['David','Bret','Sanju']
                                4:  Remove a member from the collection at a given subscript
                                5:  Remove the last member from the collection 
                                6:  Display third, fourth and fifth element from the collect
                                7:  exit\n ''')))
        if(ch==1):
            print(l1)
        elif(ch==2):
            l1.append(input("enter the element"))
        elif(ch==3):
            l1.extend(input("enter the list"))
        elif(ch==4):
            l1.pop(int(input("enter the number of subscriupt")))
        elif(ch==5):
            l1.pop()
        elif(ch==6):
            l1.print(list[3:6])
        elif(ch==7):
            exit
        else:
            print("invald")



ba()            