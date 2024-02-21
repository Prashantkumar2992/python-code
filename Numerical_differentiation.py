import numpy as np
import matplotlib.pyplot as plt

x=0.3
list1=[]
list2=[]
list3=[]

for x in np.arange(-2,6,0.1):
    
    X1=-x**2 + 4*x + 5 
    list1.append(X1)
      
    X2 =-2*x + 4
    list2.append(X2)
       
    X3 = -2
    list3.append(X3)
    
# x=np.arange(-2,6)
x=np.arange(-2,6,0.1)
plt.scatter(x,list1)
plt.scatter(x,list2)
plt.scatter(x,list3)
    
# plt.plot(list1)
# plt.plot(list2)
# plt.plot(list3)
plt.show()
