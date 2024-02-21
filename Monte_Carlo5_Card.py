import numpy as np

N =10000 

deck = ["1S","2S","3S","4S","5S","6S","7S","8S","9S","XS","JS","QS","KS",
        "1H","2H","3H","4H","5H","6H","7H","8H","9H","XH","JH","QH","KH",
        "1C","2C","3C","4C","5C","6C","7C","8C","9C","XC","JC","QC","KC",
        "1D","2D","3D","4D","5D","6D","7D","8D","9D","XD","JD","QD","KD",
        ]
cnt=0
for i in range (0,N):
    np.random.shuffle(deck)
    for j in range (0,52):
        if j<51:
            if (deck[j][0] == "K" and deck[j+1][0] == "K"):
                # print(deck[j][0])
                # print (deck[j+1][0])
                    cnt=cnt+1
                    # cnt+=1
                    break               
print("Probability of atleast 2 kings appear side by side is ", cnt/N)


# OUTPUT
# hpcsap@hpcsap-DIT400TR-55L:~/Python/NUMERICAL_METHOD$ /bin/python3 /home/hpcsap/Python/NUMERICAL_METHOD/Monte_Carlo5_Card.py
# Probability of atleast 2 kings appear side by side is  0.2171 