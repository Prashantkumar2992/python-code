import numpy as np
# import matplotlib.pyplot as plt
# mu,sigma = 0, 0.1  # mean and standard deviation
# s= np.random.normal(mu,sigma,1000)
# plt.hist(s,bins=25,density=False,alpha=0.6)
# plt.show()

# import numpy.random as rnd
# s = np.random.triangular(-3,0,8,100000)
# plt.hist(s,bins=25,density=False,alpha=0.6)
# plt.show()

# import matplotlib.pyplot as plt
# s = np.random.uniform(-1,0,1000)
# count,bins,ignored = plt.hist(s,15,density=True)
# plt.plot(bins,np.ones_like(bins),linewidth=2,color='r')
# plt.show()


a=5. # shape
s=np.random.weibull(a,1000)

import matplotlib.pyplot as plt
x=np.arange(1,100.)/50.
def weib(x,n,a):
    return (a/n)*(x/n)**(a-1)*np.exp(-(x/n)**a)

count, bins, ignored=plt.hist(np.random.weibull(5.,1000))
x=np.arange(1,100.)/50.
scale = count.max()/weib(x,1.,5.).max()
plt.plot(x,weib(x,1.,5.)*scale)
plt.show()