def set_union(setA,setB) :
 print(setA.union(setB))


def set_intersection(setA,setB) :
	print(setA.intersection(setB))
 
def set_minus(setA,setB) :
	print(setA.difference(setB))

def set_minus(setA,setB) :
	print(setB.difference(setA))
 
def is_member_of_set(setB) :
	print(input("enter value") is setB)

def set_display(setA):
	print(setA) 

def set_display(setA):
	print(setA) 
		
def set_add_element(setA):
	print(setA.add(input("enter the value"))) 

def set_add_elements(setA):
	print(setB.update(input("enter the value")))

def set_remove_element(setB):
	print(setB.remove(input("enter the value"))) 

def my_set_store():
	print("\n Welcome to Our Set Store !!! ")
n=int(input("enter the term"))
for i in range(0,n,1):
	setA = set().add(input("enter the value"))
for i in range(0,n,1):
    setB = set().add(input("enter the value"))


while(1):
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