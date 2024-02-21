""" Write a python program to calculate approximate values of cube root of 27; using For Loop on a guess value."""

# Find approximate value of the cube root of 27

guess = 0.0
cube = 27
increment = 0.1
epsilon = 0.1 # Error Tolerance;

# Finding the approximate value
cnt=30
for i in range(0,cnt):
    if(abs (guess **3 - cube)) >= epsilon:
	    guess+=increment
print(guess)

# Checking the approximate value
if abs (guess**3-cube) >= epsilon:
	print("Failed on the cube root of",cube)
else:
	print(guess,"is close to the cube root of",cube)

 

