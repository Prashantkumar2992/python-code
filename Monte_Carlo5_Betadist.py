from scipy import stats
import numpy as np
# import matplotlib.pyplot as plt
N = 10000
a,b = (50,50)
x_min, x_max = (0, .55)
randx = np.random.uniform(x_min, x_max,N)
y = stats.beta.pdf(randx,a,b)
beta_at_55 = stats.beta(a,b).cdf(.55)
Mcarlo_width = x_min - x_max 
Mcarlo_rect_area = Mcarlo_width * y.sum()
Mcarlo_rect_area_avg = Mcarlo_rect_area/N
print(f'Real value to find : {beta_at_55}') 
print(f'Integral value : {Mcarlo_rect_area_avg}')


# OUTPUT
# hpcsap@hpcsap-DIT400TR-55L:~/Python/NUMERICAL_METHOD$ /bin/python3 /home/hpcsap/Python/NUMERICAL_METHOD/Monte_Carlo5_Betadist.py
# Real value to find : 0.8413478010629013
# Integral value : -0.8341996697445325