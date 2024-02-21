def dict():
    dict= {}
    items = int(input("How many items you want to add"))
    for i in range(0,items,1):
        key = input('Please enter the key ')    
        value = input('Please enter the value ')    
        d[key] = value 
    
    
    while(1):
        ch=int(input("enter your choice"))
        print("""1: Display all elements in the capitals collection
                 2: Add an element to the capitals collection like --> Afghanistan: Kabul
                 3: Add multiple elements to the capitals collection like -->  Albania:Tirana,Algeria:Algiers,Andorra:Andorra la Vella
                 4: Remove an element from the collection
                 5: Take a key from the user and show value if it is present in the dictionary
                 6: Take a key from the user update it if it is present in the dictionary or add the key to the dictionary
                 7: Exit the Program\n""")
        if(ch==1):
            print(dict)
        elif(ch==2):
            dict.update(input("enter the key\n"),input("enter the value\n"))
        elif(ch==3):
            for i in input("enter the no of member to be added"):
                d|= {input("enter key"):input("enter value"),input("new_key1"):input("enter value")}
        elif(ch==4):
            del d[int(input("enter index"))]
        elif(ch==5):
            print(dict[input("enter key")])
        elif(ch==6):
            
                a=input("enter key\n")           
                dict.update(a,input("enter the vale\n"))
                    
            
        
        elif(ch==7):
            exit
        else:
            print("invalid choice")
            
            
            
            
         
         
         
dict()   
            