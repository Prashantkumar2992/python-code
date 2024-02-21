
sour=input("enter the souce of journey")
des=input("enter the destination")
fare=int(input("enter fare:"))
discount=float(input("enter discount"))
print("fare from ",  sour ,"to", des, "is" ,fare , "INR with has a discount of", discount ,"%")


def calb(a, b,c,d):
    print("fare from ",  a ,"to", b, "is" ,c , "INR with has a discount of", d ,"%")


calb(sour,des,fare,discount)