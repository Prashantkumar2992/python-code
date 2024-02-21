import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

guess = 0.0
cube = 27
increment = 0.1
epsilon = 0.1 # Error Tolerance;

# Finding the approximate value
cnt=30
list3=[]
list4=[]
for i in range(0,cnt):
    if(abs (guess**3 - cube)) >= epsilon:
        guess+=increment
        list3.append(guess)
        list4.append(guess**3 - cube)
        
print(list3)
print(list4)

plt.plot(list3)
plt.plot(list4)
plt.xlabel('guess')
plt.ylabel('Error')
plt.show()