a=int(input("enter the number"))
if a%3==0:
    print("fizz,")
    exit
if a%5==0:
    print("buzz")
    exit

if a%3!=0 and a%5!=0:
    print("invalid")