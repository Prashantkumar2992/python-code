import numpy as np
from scipy.integrate import quad

def area(f,a,b,n):
    h = ((b-a)/n)/2
    sum = 0
    for i in range (int(n)):
        t = (f (a + (2*i)*h) + 4*f(a + (2*i + 1)*h) + f(a + (2*i + 2)*h))
        sum = sum + t
    return h/3*sum

def f(x):
    y = 2+ 2*x + x**2+ np.sin(2*np.pi*x) + np.cos(2*np.pi*x/0.5)
    return y 

print(area(f,0,1.5,1.0)) 
print(area(f,0,1.5,3.0))
print(area(f,0,1.5,9.0))
print(area(f,0,1.5,18.0))

# Using quad function 
area = quad(f,0,1.5)
print (area)


# OUTPUT
# hpcsap@hpcsap-DIT400TR-55L:~/Python/NUMERICAL_METHOD$ /bin/python3 /home/hpcsap/Python/NUMERICAL_METHOD/Simpsons1-3rd_rule.py
# 4.875
# 6.208333333333333
# 6.693447267087159
# 6.693318261607817
#(6.6933098861837905, 7.431066802480665e-14)