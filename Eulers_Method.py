import numpy as np

# listx = {"x1" : 0.02,"x2" : 0.04, "x3" : 0.06, "x4" : 0.08, "x5" : 0.1, "x6" :0.12}
# listy = {"y1" : 1.02 , "y2" : 1.04 , "y3" : 1.06 , "y4" : 1.08 , "y5" : 1.10, "y6" : 1.12}
h = 0.02
x0 = 0
y0 = 1
def f(x,y):
    return x**3+y
for i in range(0,6):
    y1 = y0 + h*f(x0,y0)
    y0=y1
    x0=x0+0.02
    # print(x0)
    print (y1)



