def fibonacci(n):
    a1= 0
    a2 = 1
    if n==1:
        print(a1)
    else:
        print(a1)
        print(a2)
        for i in range(2,n):
            sum = a1+a2
            a1= a2
            a2= sum
            print(sum)

n = int(input("Enter the number of fibonacci numbers to be displayed:"))
fibonacci(n)


