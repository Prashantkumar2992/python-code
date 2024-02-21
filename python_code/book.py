class Book:
    department_name = input("enter the department")
    
    
    def __init__(self,title,author,year):
        self.title = title
        self.author = author
        self.year = year
        print(f"{self} was created successfully with values, {title},{author},{year}")
        
    def get_emp_salary(self):
        return self.title
    def set_emp_salary(self,rcv_author):
        self.author = rcv_author
        
    @classmethod
    def get_department_name(cls):
        return cls.department_name
    
    @staticmethod
    def format():
         print("book detail are in readable format\n") 
         
def main():
    rahul= Book('hello','ab',2000)
    pk= Book('hi','cd',2001)
    rahul.format()
    print("rahul book", rahul.title, rahul.author, rahul.year)
    print("pk book", pk.title, pk.author,pk.year)
    

    
    
main()