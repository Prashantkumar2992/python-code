# # using input() to take user input
# num = int(input('Enter a number: '))

# print('You Entered:', num)

# print('Data type of num:', type(num))



# def function_name(num1,num2=10,num3=50):
#         print( num1+num2+num3)
        
# print(function_name(1)  )

# # definition 
# def my_addition(first_num,second_num):
#     return first_num+ second_num

# def my_square(first_num):
#     return first_num**2

# def my_exponentiation(first_num,second_num):
#     return first_num**second_num

# # invocation / caller of the functions
# first_num = int(input("Please enter First number:"))
# second_num = int(input("Please enter Second number:"))

# print("The Addition of the numbers is ", my_addition(first_num,second_num))
# print("First number squared is  ", my_square(first_num))
# print("First number raised to number second number is  ",my_exponentiation(first_num,second_num) )




# students=  []
# for num in range(0,int(input("how many student"))):
#     students.append(input("enter name :"))

# print( students)


# input_string = input("comma seperated number")
# students= input_string.split(',')
# temp_list = []
# for student in students:
#     temp_list.append(int(student))

# students = temp_list    
# print( students)

# print("\n Welcome to Our List Store !!! ")
# print("Please enter a list Comma seperated that you would want to perform Operation Upon")
# members = input('for ex: Pratiksha,Kevin,Sachin,Yuvraj,Sania \n').split(",")
# print("You entered the following list ", members , "\n")
# while(True):
#     print("\n*************** Menu **********************")
#     print("Operations supported by our program are :")
#     print("  1:  Display elements in the members list")
#     print("  2:  Add an element to the members collection like 'Sehwag' ")
#     print("  3:  Add elements to the members collection like ['David','Bret','Sanju']")
#     print("  4:  Remove a member from the collection at a given subscript")
#     print("  5:  Remove the last member from the collection ")
#     print("  6:  Display third, fourth and fifth element from the collection ")
#     print("  7: Exit the Program ")
#     choice = int(input("Please enter your choice "))

#     if choice   ==1:
#         print(members)
#     elif choice ==2:
#         members.append(input("enter the string to be added")) 
#         print(members)
#     elif choice ==3:
#         members.extend(input("please enter strings like string1,string2").split(','))
#         print(members)
#     elif choice ==4:
#         members.pop(int(input("subscript please")))
#         print(members)
#     elif choice ==5:
#         members.pop() 
#         print(members)
#     elif choice ==6:
#         print(members[2:5])
#     elif choice ==7:
#         break
#     else:
#         print("Invalid Input , Please Try Again !!!!  ")

# print("\n Welcome to Our tuple Store !!! ")
# print("Please enter a tuple Comma seperated that you would want to perform Operation Upon")
# temp_list = input('for ex: 10,20,30,40 \n').split(",")
# members = []
# for val in temp_list:
#     members.append(int(val))
    
# members = tuple(members)

# while(True):
#     print("\n*************** Menu **********************")
#     print("Operations supported by our program are :")
#     print("  1:  Display elements of the tuple")
#     print("  2:  Display third, fourth and fifth element from the collection ")
#     print("  3:  Retrieve element at a given subscript")
#     print("  4:  Retrieve elements from a given subscript and to a given subscript")
#     print( " 5:	 Find minimum element in the tuple " )
#     print( " 6:	 Reverse elements in the tuple " )
#     print("  7: Exit the Program ")
#     choice = int(input("Please enter your choice "))

#     if choice   ==1:
#         print(members) 
#     elif choice ==2:
#         print(members[2:5])
#     elif choice ==3:
#         print(members[int(input("subscript"))])
#     elif choice ==4:
#         print(members[int(input("start subscript")): int(input("stop subscript"))+1])
#     elif choice ==5:
#         print(min(members) )
#     elif choice ==6:
#         print(members[::-1])
#     elif choice ==7:
#         break
#     else:
#         print("Invalid Input , Please Try Again !!!!  ")


# my_list = [1,2,3]
# print("Popped value " , my_list.pop())
# print("Popped value " , my_list.pop(0))
# # print("Popped value " , my_list.pop(10))
# print("Popped value " , my_list.pop(10,"default")) # error

# def dict_display_capitals(capitals):
#     """Display number of elements in the capitals collection"""
#     print(f"capitals dictionary = {capitals}")

# def dict_add_element(capitals):
#     """Add "Afghanistan": "Kabul"  to the capitals collection """
#     inp_key = input("Please enter the key to add ")
#     inp_val = input("Please enter the value to add ")
#     capitals[inp_key]= inp_val
#     dict_display_capitals(capitals)		

# def dict_add_elements(capitals):
#     """Add Albania:Tirana,Algeria:Algiers,Andorra:Andorra la Vella to the capitals collection"""    
#     sub_dict_of_capitals= {}
#     keys = input("Please enter the additional countries as keys for ex : India,USA,Srilanka").split(',')
#     for elem in keys :
#         sub_dict_of_capitals[elem] = input(f"Please enter the capital for {elem}: ").strip()
#     capitals.update(sub_dict_of_capitals)    
#     dict_display_capitals(capitals)		
	
# def dict_remove_element(capitals):
#     """Remove the USA from the collection"""    
#     capitals.pop(input("Please enter the key you would want to remove"))
#     dict_display_capitals(capitals)

# def dict_show_value_for_a_key(capitals):
#     print(f'The value for the key : {capitals.get(input("Please enter the key you would like to lookup for "),"Not Found")} ')
#     dict_display_capitals(capitals)		

# def dict_update_or_add_a_key(capitals):
#     input_key = input("Please enter the key that you want want to add or update") 	
#     input_value = input("Please enter the value that you want want to add or update")	
#     capitals[input_key] = input_value
#     dict_display_capitals(capitals)		

# def my_dict_store():
#     print("\n Welcome to Our Dict Store !!! ")

#     capitals= {}
#     keys = input("Please enter the countries as keys for ex : India,USA,Srilanka").split(',')
#     for elem in keys :
#         capitals[elem] = input(f"Please enter the capital for {elem}: ").strip()

#     while(True):
#         print("\n*************** Menu **********************")
#         print("Operations supported by our program are :")
#         print("    1: Display elements in the capitals collection")
#         print('    2: Add an element to the capitals collection like --> Afghanistan: Kabul')
#         print('    3: Add multiple elements to the capitals collection like -->  Albania:Tirana,Algeria:Algiers,Andorra:Andorra la Vella')
#         print("    4: Remove an element from the collection 	")
#         print("    5: Take a key from the user and show value if it is present in the dictionary")
#         print("    6: Take a key from the user update it if it is present in the dictionary or add the key to the dictionary")
#         print("    7: Exit the Program ")
#         choice = int(input("Please enter your choice "))
        
#         if choice   ==1:
#             dict_display_capitals(capitals) 
#         elif choice ==2:
#             dict_add_element(capitals)
#         elif choice ==3:
#             dict_add_elements(capitals)
#         elif choice ==4:
#             dict_remove_element(capitals) 
#         elif choice ==5:
#             dict_show_value_for_a_key(capitals)
#         elif choice ==6:
#             dict_update_or_add_a_key(capitals)
#         elif choice ==7:
#             break
#         else:
#             print("Invalid Input , Please Try Again !!!!  ")	

# my_dict_store()

# # Solution:
# def menu(elem):
#     print(f'Please choose a datatype for the {elem} from below')
#     print('1: Integer')
#     print('2: Float')
#     print('3: String')
#     print('4: Tuple')
#     print('5: List')
#     print('6: Dictionary')
#     print('7: Set')
#     print('8: Frozenset')
    
#     dt= int(input("Datatype choice please:"))
#     if dt != 6 :
#         raw_string = input(f"Please enter value for {elem}")
#     if dt ==1 :
#         return int(raw_string)
#     elif dt ==2 :
#         return float(raw_string)
#     elif dt ==3 :
#         return raw_string
#     elif dt ==4 :
#         return tuple(raw_string.split(','))
#     elif dt ==5 :
#         return raw_string.split(',')
#     elif dt ==6 :
#         d = {}
#         keys = []
#         for i in range(int(input('How many keys'))):
#             keys.append(input("Key_name"))
#         for elem in keys :
#             d[elem] = menu(elem)    
#         return d     
#     elif dt ==7 :
#         return set(raw_string.split(','))
#     elif dt ==8 :
#         return frozenset(raw_string.split(','))


# d = {}
# keys = ['employee_id','employee_name','account_number','salary','address']
# # keys = ['employee_id','address']
# for elem in keys :
#     d[elem] = menu(elem)

# print(d)    

    

def set_union(first_set,second_set):
  set_display(first_set)
  set_display(second_set)
  print("Union",first_set.union(second_set))

def set_intersection(first_set,second_set):
  set_display(first_set)
  set_display(second_set)
  print("Intersection",first_set.intersection(second_set))  

def set_minus(first_set,second_set):
  set_display(first_set)
  set_display(second_set)
  print("Difference",first_set.difference(second_set))    

def is_member_of_set(rcv_set):
   element= input("Please enter element to search for ") 
   print(f"Element{element} is present(True/False): { element in rcv_set }")  
   set_display(rcv_set)

def set_display(rcv_set):
   print(rcv_set)

def set_add_element(rcv_set):
	rcv_set.add(input("Please enter element to add"))   
	set_display(rcv_set)
	
def set_add_elements(rcv_set):
    rcv_set.update(input("Please enter comma seperated elements for the set ").split(","))   
    set_display(rcv_set)
	
def set_remove_element(rcv_set):
    rcv_set.discard(input("Please enter element to remove"))
    set_display(rcv_set)            


def my_set_store():
    print("\n Welcome to Our Set Store !!! ")
    setA = set(input("Please enter comma seperated elements for the set A").split(","))
    setB = set(input("Please enter comma seperated elements for the set B").split(","))

    """ In case you need a set of numbers you may want to do below instead of above two lines"""
    # map(function_to_applied_to_each_element, collection)
    #setA = set(map(int,input("Please enter comma seperated elements for the set A").split(',')))
    #setB = set(map(int,input("Please enter comma seperated elements for the set B").split(',')))        
    while(True):
        print("\n*************** Menu **********************")
        print("Operations supported by our program are :")
        print("	1: Union")
        print("	2: Intersection ")
        print("	3: A-B")
        print("	4: B-A")
        print("	5: Take a element from user and Display if that element is a member of set B ")
        print("	6: Display number of elements in the set A")
        print(" 7: Display number of elements in the set B")
        print("	8: Add an element taken from the user to the set A")
        print("	9: Add multiple elements taken from the user to the set A")
        print("	10: Remove an element taken from the user from set A")
        print(" 11: Exit")

        choice = int(input("Please enter your choice "))

        if choice   ==1:
            set_union(setA,setB) 
        elif choice ==2:
            set_intersection(setA,setB)
        elif choice ==3:
            set_minus(setA,setB)
        elif choice ==4:
            set_minus(setB,setA)
        elif choice ==5:
            is_member_of_set(setB) 
        elif choice ==6:
            set_display(setA)
        elif choice ==7:
            set_display(setB)
        elif choice ==8:
            set_add_element(setA)
        elif choice ==9:
            set_add_elements(setA)
        elif choice ==10:
            set_remove_element(setA)
        elif choice ==11:
            break
        else:
            print("Invalid Input , Please Try Again !!!!  ")  

my_set_store()   