
a = int(input("enter the number"))
b = int(input("enter the number"))
sum = a+b
print("sum:",sum)
e=a*a
print("sqaure:",e)
s=a**b
print("power",s)
def calculation(n1,n2):
    sum=n1+n2
    e=n1*n2
    s=n1**n2
    return sum, e, s

calculation(a ,b)
print("sum:",sum)
print("sqaure:",e)
print("power:",s)