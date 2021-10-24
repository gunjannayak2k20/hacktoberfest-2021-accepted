while 1:
    i=1
    b=2
    n=int(input('enter no of tree branch: '))
    while b<n+2:
        print ('  '*(30-i),(2*i-1)*'* ')
        i+=1
        if i>b:
            b+=1
            i=1
        
    print ('  '*29,'*\n','  '*29,'*\n','  '*29,'*\n','  '*29,'*\n')









