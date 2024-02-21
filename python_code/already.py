class MyException(Exception):
    pass

student = list()
student.append("Rohan")
print("enter 3")
for i in range(1,4):
    inp=input("enter name:")
    try:
        if(inp in student):
            raise MyException
        student.append(inp)
    except Exception:
        print("already exists")

print(student)