class employee:
    department_name = input("enter the department")
    
    
    def __init__(self,emp_id,emp_salary,mgr_id):
        self.employee_id = emp_id
        self.employee_salary = emp_salary
        self.employee_mangerid = mgr_id
        print(f"{self} was created successfully with values, {emp_id},{emp_salary},{mgr_id}")
        
    def get_emp_salary(self):
        return self.employee_salary
    def set_emp_salary(self,rcv_salary):
        self.employee_salary = rcv_salary
        
    @classmethod
    def get_department_name(cls):
        return cls.department_name
    
    @staticmethod
    def field_expertise():
         print("expertise are 1) cricket ---- 2)travelling ---- 3)vollyball\n") 
         
def main():
    gaurav= employee(101,10000,'A101')
    rahul= employee(102,500000,'A1054')
    print("rahul detail", rahul.employee_id, rahul.employee_salary, rahul.employee_mangerid)
    print("gaurav details", gaurav.employee_id, gaurav.employee_salary,gaurav.employee_mangerid)
    rahul.field_expertise()
    del gaurav
    del rahul.employee_mangerid
    
main()