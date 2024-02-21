def gendict():
    dicta= {}
    n=int(input("enter no of member in dict\n"))
    while(1):
        s=input("run:r and exit:ex\n")
        if(s=="ex"):
            break
        elif(s=="r"):
            for i in range(0,n,1):
            
             ab=input("enter the type value of collection(dict,tup,lis,stri,inte\n")
             key = input('Please enter the key ') 
             if(ab=="dict"):
              value= gendict()
             elif(ab=="tup"):
               value=input("enter member separated by space\n").split(',')
             elif(ab=="lis"):
                value=list = []
                for n in range(0,int(input("enter number of element\n"))):
                    list =list.append(input("enter the member\n"))
             elif(ab=="stri"):
                value=input("Please enter a string that you would want to perform Operation Upon ")
             elif(ab=="inte"):
                value = int(input("enter number"))
             else:
                print("invalid choice")
        
        
             dicta[key] = value 
        
    print(dicta)
        
        
gendict()