import numpy as np
from scipy.integrate import quad

def area(f,a,b,n):
    h = (b - a)/n
    sum = 0
    for i in range (int(n)):
        t = (f (a + i*h) + f(a + (i+1)*h)) 
        sum = sum + t
    return h/2*sum

def f(x):
    y = 2+2*x+x**2+np.sin(2*np.pi*x)+np.cos(2*np.pi*x/0.5)
    return y 
print(area(f,0,1.5,1.0)) 
print(area(f,0,1.5,9.0))

# area=quad(f,0,1.5)
# print (area)

# res, err = quad(f, 0, 1.5)

# print("The numerical result is {:f} (+-{:g})"
#     .format(res, err))


# OUTPUT
# hpcsap@hpcsap-DIT400TR-55L:~/Python/NUMERICAL_METHOD$ /bin/python3 /home/hpcsap/Python/NUMERICAL_METHOD/Trpezoidal_area_cal.py
# 8.4375
# 6.670619579039257
# (6.6933098861837905, 7.431066802480665e-14)
# The numerical result is 6.693310 (+-7.43107e-14)