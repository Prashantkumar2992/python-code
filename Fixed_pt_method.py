from math import sin
from math import cos

x = 0.1
# x = cos(x)

while True:
    x2=cos(x)
    if(abs(round((x2 - x),3)) <= 0.001):
        print ("Root is = ",round(x,3))
        break 
    else:
        x=x2



