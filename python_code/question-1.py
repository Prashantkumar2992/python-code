def add_contact(contacts):
    contacts={}
    items = int(input("How many items you want to add"))
    for i in range(0,items,1):
          key = input('Please enter the key ')    
          value = input('Please enter the value ')    
          contacts[key] = value 
    
def display_contacts():
    print(contacts)
    
def search_contact(contacts):
    key=input("enter the key")
    if key in contacts:
        print("value is",contacts[key])

def delete_contacts(contacts):
    key=input("enter the key to be deleted")
    del contacts[key]

def main():
    contacts={}
    items = int(input("How many items you want to add"))
    for i in range(0,items,1):
          key = input('Please enter the key ')    
          value = input('Please enter the value ')    
          contacts[key] = value 
    
    while True:
        ch=int(input(print('''
                           1.add contact
                           2.display contacts
                           3.search contacts
                           4.delete contact
                           5.exit''')))
        if(ch==1):
            add_contact()
        elif(ch==2):
            #display_contacts()
            print(contacts)
        elif(ch==3):
            #search_contact()
            key=input("enter the key")
            if key in contacts:
                print("value is",contacts[key])
        elif(ch==4):
            #delete_contacts()
            key=input("enter the key to be deleted")
            del contacts[key]
        elif(ch==5):
            exit
        else:
            print("invalid choice")
            
            
            
            
main()
                     
        
        
    