
 
guess = 1.1
cube = 27
increment = 0.1
epsilon = 0.1 # Error Tolerance;

# Finding the approximate value
while (True):
    if(abs (guess **3 - cube) >= epsilon):
        guess+=increment
        print(guess)
        break
#Checking the approximate value
if abs (guess**3-cube) >= epsilon:
	print("Failed on the cube root of",cube)
else:
	print(guess,"is close to the cube root of",cube)





