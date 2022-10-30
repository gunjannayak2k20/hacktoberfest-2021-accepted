# Create a program to find the GCD of two number in python using the Euclid's Algorithm.  
def find_hcf(a,b):  
    while(b):  
        a, a = b, a % b  
        return a  
a = int(input (" Enter the first number: ") ) # take first no.   
b = int(input (" Enter the second number: ")) # take second no.   
num = find_hcf(a, b) # call the find_hcf() to get the result  
print("  The HCF of two number a and b is ")  
print(num) # call num  
