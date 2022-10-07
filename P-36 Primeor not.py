num=int(input("Enter Any Number"))
flag=0
for i in range(2,num):
        if (num%i==0):
            flag=1
            break
        else: 
            flag=0

if flag==1:
     print("Its a composite Number ")
else:
     print("Its a prime Number")
    
    
        
