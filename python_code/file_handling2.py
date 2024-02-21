#for two file
file=open('first.txt','r+')
file1=open('file.txt',"w")


for ab in file:
    ab1= "HPCAP"+ ab
    file.write(ab1)        
    
print(ab1)
file.close()
file1.close()

# for same file
intp = open("first.txt","r")
cont = []
for ab in intp:
    cont.append(ab)
    intp.close()
    
kb = open("first.txt","w")
for ar in cont:
    kb.write("HPCAP"+ ar)