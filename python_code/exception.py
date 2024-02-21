def fruit():
        
            dict= {}
            items = int(input("How many items you want to add"))
            for i in range(0,items,1):
                try:
                    key = input('Please enter the key ')  
                except Exception:
                    print(key=input("key is not available.. enter key"))
                finally:
                    print(key=input("key is not available.. enter key"))
                    value = input('Please enter the value ')    
                    dict[key] = value 
                
        
fruit()        
            
            
