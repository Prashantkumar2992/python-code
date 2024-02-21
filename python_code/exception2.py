def my_list():
     list = []
     for n in range(0,int(input("enter number of element\n"))):
        list.append(input("enter the member\n"))
     try:
        list[int(input("enter the index no"))]
          
    
     except IndexError:
            
             print("please enter a valid index value ")        
   
        
        
        
my_list()