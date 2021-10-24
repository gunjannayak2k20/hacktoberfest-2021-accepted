import math
def fact(n):
    try: 
        return(math.factorial(n))
    except ValueError as e :
        print("Please Enter Positive Numbers Only :( ")


nmbr = int(input("")) 
f = fact(nmbr) 
print(f)  
