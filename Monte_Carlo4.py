import numpy as np
from scipy.integrate import quad
import matplotlib.pyplot as plt
a = -2
b = 5  # h = b-a
area = 0
list=[]
def f(x):
    return x**3 + (6*(x**2)) - x + 17

np.random.seed(3)
x = np.random.uniform(-2,5,5000)
print(x)
for i in x:
    area+=((b-a)*abs(f(i)))
    
print("My area: ", area / 5000)

f, error = quad(f,-2,5)
print ("Inbuilt area: ",f)


# count,bins,ignored = plt.hist(x,15,density=True)
# plt.plot(bins,np.ones_like(bins),linewidth=4,color='y')

# plt.plot(x)
# plt.plot(area)

# OUTPUT
# hpcsap@hpcsap-DIT400TR-55L:~/Python/NUMERICAL_METHOD$ /bin/python3 /home/hpcsap/Python/NUMERICAL_METHOD/Monte_Carlo4.py
# /home/hpcsap/.local/lib/python3.10/site-packages/matplotlib/projections/__init__.py:63: UserWarning: Unable to import Axes3D. This may be due to multiple versions of Matplotlib being installed (e.g. as a system package and as a pip package). As a result, the 3D projection is not available.
#   warnings.warn("Unable to import Axes3D. This may be due to multiple versions of "
# [1.85558532 2.95703476 0.03633317 ... 2.88176564 2.2277066  0.85149087]
# My area:  526.7418835876392
# Inbuilt area:  526.75