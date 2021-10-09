#Python Code that gets the parts of a datetime object

from datetime import date,time,datetime

d1= datetime(1988, 10, 31, 14, 32, 30, 345) 
year = d1.year
print("Year: ",year)
month = d1.month
print("Month: ",month)
day = d1.day
print("Day: ",day)
hr = d1.hour
print("Hour: ",hr)
min = d1.minute
print("Minute: ",min)
sec = d1.second
print("Second: ",sec)
micsec = d1.microsecond
print("Microsecond: ",micsec)




# Find Leap Year
#Program to print the given year is leap year or not

def leap(y):
    if y%4 == 0 and y%100 != 0 or y%400 == 0 :
        print("Leap year")
    else:
        print("Not Leap year")


leap(1988)    
leap(1700)
leap(1992)


# Write a Python program to print yesterday, today, tomorrow.

from datetime import datetime,time,date,timedelta

today = date.today()

yesterday = today - timedelta(days = 1)
tomorrow = today + timedelta(days = 1)

print('Yesterday : ',yesterday)
print('Today : ',today)
print('Tomorrow : ',tomorrow)

tim=datetime.now()
before5min = tim - timedelta(minutes=5)
after5min = tim +timedelta(minutes=5)
print(tim)
print(after5min)
print(before5min)

after4weeks=today+timedelta(weeks=4)
print(after4weeks)


#Write a Python program to print next 5 days starting from today.

import datetime

dt = datetime.datetime.today()
for d in range(1, 6):
      print(dt + datetime.timedelta(days=d))

#Python program to add 5 seconds with the current time.

import datetime

a= datetime.datetime.now()
b = a + datetime.timedelta(seconds=5)

print(a.time())
print(b.time())



