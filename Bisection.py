from math import sin
from math import cos
from math import erf

a = float(input("Enter the value of a : "))
b = float(input("Enter the value of b : "))

def fun(x):
    x = sin(5*x) + cos(2*x)
    return x

for i in range (0,20):
    if(fun(a)*fun(b)) < 0 :
        xi =(a+b)/2

        if round(fun(xi),4) == 0 :
            print("The Xi value is only your root and its value is : ",round(xi,3))
            break
        
        if (fun(a)*fun(xi)) < 0 :
            erf = ((xi+1) - a ) / xi+1
            print("The a value from root lies between : ",round(erf,4))
            b = xi
            
        if (fun(b)*fun(xi)) < 0 :
            erf = ((xi+1) - b ) / xi+1
            print("The b value from root lies between : ",round(erf,4))
            a = xi
        
    else :
        print("Root does not Exist")
        break
 


