raise_salary_percentage= float(input("enter percentage:"))
Name= 'gaurav'
existing_salary = 900 
existing_salary= existing_salary+(existing_salary*(raise_salary_percentage/100))
print("update:", Name, existing_salary)

def sal(a,b):
    new_salary= a+(a*(b/100))
    return new_salary


p=sal(existing_salary,raise_salary_percentage)
print(p)
