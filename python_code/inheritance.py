class Employee :
    organisation_name = "cdac"
    @classmethod
    def get_organsn_name(cls): 
        return cls.organisation_name
    def set_organsn_name(cls,org_name):
        cls.organisation_name = org_name
        
    def __init__(self,emp_id,name,base_location,deployed_location,designation,salary):
        self.id = emp_id
        self.name = name
        self.location = base_location
        self.deployed = deployed_location
        self.designation = designation
        self.salary = salary
        print(f"{self} was created successfully with values, {emp_id},{name},{base_location},{deployed_location},{designation},{salary}")
        
    def get_Employee_details(self):
        print(
            f"\n-----------------------------------\n{self.designation} {self.name} Details are:\
            \nEmpid:{self.emp_id},Name:{self.name},Base Location:{self.base_location},Deployed Location : {self.deployed_location},Designation:{self.designation},Salary:{self.salary}")


class Manager(Employee):
    def __init__(self,emp_id,name,base_location,deployed_location,designation,salary,manged_emp):
        super().__init__(emp_id,name,base_location,deployed_location,designation,salary)
        self.manged_emp = manged_emp
    def perform_appraisal_for_an_Employee(self,emp_id,percent_raise):
        for emp in self.manged_emp :
            if Employee.emp_id == emp_id:
                emp.salary = emp.salary + (emp.salary*(percent_raise/100))

    def get_manager_details(self):
        print("manger detail: \n")
        super().get_Employee_details()
        print("manger Employee: \n")
        for emp in self.manged_emp:
            self.get_Employee_details()


              


def main():
    e1= Employee(101,"rahul","patna","pune","it manager",50000)
    e2= Employee(102,"ravi","mumbai","gaya", "engineer",520006)
    e3= Employee(103,"pk","up","delhi", "mind reader", 1000000)
    Manager1 = Manager(104,"arav","mp","indore","it",10000,[e1,e2,e3])
    e1.get_Employee_details()
    Manager1.perform_appraisal_for_an_Employee(102,10)
    Manager1.get_manager_details()
    
    
main()


    
  
