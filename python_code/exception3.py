class my_except(Exception):
    pass
def age():
    try:
        a=int(input("enter the age"))*365
        if a>10001:
            raise my_except
    
        else:
         print(f"You have lived for {a} days ")
    except my_except:
         print(f"you lived for so long {a} days , may be you will die soon:)")
         
age()