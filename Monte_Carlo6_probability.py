import numpy as np
# import matplotlib.pyplot as plt

N=5000
np.random.seed(5)

mean1,sigma1 = 5,1  # mean and standard deviation
x1= np.random.normal(mean1,sigma1,N)

mean2,sigma2 = 10,1  # mean and standard deviation
x2= np.random.normal(mean2,sigma2,N)

mean3,sigma3 = 15,1 # mean and standard deviation
x3= np.random.normal(mean3,sigma3,N)

# b = np.array([3,4,5,4,6.5])
# c = np.array([7,8,9,10,12])
# d = np.array([12,14,15,14,17])

a = x1+x2+x3
#print(a)
num = 0   
for i in range (0,N):
    if(a[i]>34):
        num+=1
        print("Satisfied Value", a[i])
print("Probability = ", num/N)
print("Pobability Percentage = ", (num/N) * 100)
        
    
# OUTPUT
# hpcsap@hpcsap-DIT400TR-55L:~/Python/NUMERICAL_METHOD$ /bin/python3 /home/hpcsap/Python/NUMERICAL_METHOD/Monte_Carlo6_probability.py
# Satisfied Value 34.162166000922
# Satisfied Value 34.55575670806292
# Satisfied Value 34.76624268343255
# Satisfied Value 34.15226804685247
# Satisfied Value 34.167431760021714
# Satisfied Value 34.01342600773363
# Satisfied Value 34.40426387859195
# Satisfied Value 34.11288213937542
# Satisfied Value 34.18103019164799
# Satisfied Value 34.40483922199292
# Satisfied Value 34.93658409162181
# Satisfied Value 34.724489035909045
# Satisfied Value 34.04026986762111
# Satisfied Value 34.20703046932931
# Satisfied Value 34.205814270869595
# Satisfied Value 35.231012760211215
# Satisfied Value 34.0798627209165
# Satisfied Value 34.13482872505462
# Satisfied Value 35.06699369517897
# Satisfied Value 34.50682068892573
# Satisfied Value 34.443222471759086
# Satisfied Value 35.652754714222695
# Satisfied Value 34.438602717432765
# Satisfied Value 34.07031431003651
# Satisfied Value 34.18396832032562
# Satisfied Value 34.16082112276776
# Satisfied Value 34.35095984598593
# Satisfied Value 35.92427048869489
# Satisfied Value 34.55569748657078
# Satisfied Value 34.7961923132068
# Satisfied Value 34.51258332102965
# Satisfied Value 34.17206364485709
# Satisfied Value 36.71909980704386
# Satisfied Value 34.35437430717217
# Satisfied Value 34.64898582897454
# Satisfied Value 34.34925620304745
# Satisfied Value 35.00591148713613
# Satisfied Value 34.60123207714291
# Satisfied Value 34.216800530429545
# Satisfied Value 34.45484205033375
# Satisfied Value 34.304113115544794
# Satisfied Value 34.037475178064
# Satisfied Value 34.275967384303875
# Satisfied Value 34.047159955060934
# Satisfied Value 34.12417845964251
# Satisfied Value 34.28941962724077
# Probability =  0.0092
# Pobability Percentage =  0.9199999999999999
