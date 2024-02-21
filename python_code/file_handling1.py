with(open('first.txt','r+') as file):
    t=file.read()
    with(open('second.txt','w+') as file1):
        file1.write(t)
        print(file1.read())
    
    