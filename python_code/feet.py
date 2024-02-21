cm=int(input("Enter the height in centimeters:"))  
inc = 0.394 * cm
ft = 0.0328 * cm
     
print("The length in feet",round(ft,2))  
print("The length in inches",round(inc,2))  
def height(n):
    ft=round((n/30.48),2)
    return ft

height(cm)
print(ft)

