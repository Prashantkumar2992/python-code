class negative_number_error(Exception):
    pass
def negative_number(listp):
    for i in range(0,int(input("enter the term to be added"))):
          num = int(input("Please enter a number to be added ")) 
    if (num ) <0:
        raise negative_number
    else:
        listp.append(num)
    print(listp)   
    
class positive_number_error(Exception):
    pass



def positive_list(listn):
    for i in range(0,int(input("enter the term to be added"))):
          num = int(input("Please enter a number to be added ")) 
    if (num ) >0:
        raise positive_number_error
    else:
        listn.append(num)
    print(listn)   
    
class homogenous_list_error(Exception):
    pass
    
def create_heterogenous_list(listh):
     for i in range(0,int(input("enter the term to be added"))):
          num = int(input("Please enter a number to be added "))
          listh.append(num)
          ab = listh[0]
          if type(listh[i+1]) == type(ab):
              raise homogenous_list_error
          else:
              print(listh)
             
        
def my_exception_store(): 
            listp=[]
            listn=[]
            listh=[]

            while(True):
                try:
                    print("Welcome to my_exception_store !!!!")
                    print("-------------------------------------")
                    print("Following operations are supported :")
                    print("1) Create a positive numbered list  ")
                    print("2) Create a negative numbered list  ")
                    print("3) Create a heterogenous list ")
                    print("5) Refresh the program to start with blank lists")
                    print("6) Exit  ")
                    
                    choice = int(input("Please enter your choice !!!! "))
                    if choice ==1:
                        negative_number(listn)
                    elif choice ==2:
                        negative_number(listp)
                    elif choice ==3:
                        create_heterogenous_list(listh)
                    elif choice ==4:
                        listp.clear()
                        listn.clear()
                        listh.clear()
                        print("Store restarted !!!! ")
                    elif choice ==5:
                        break
                    else:
                        print("Please choose something from the above")
                except negative_number_error:     
                    print("We received a negative number in the list and I handled negative_number_error exception")
                    listp.clear()
                except positive_number_error:     
                    print("We received a positive number in the list and I handled positive_number_error exception")
                    listn.clear()
                except homogenous_list_error:    
                    print("We received a Homogenous list and I handled homogenous_list_error exception")
                    listh.clear()
my_exception_store()