#Calculate the sum of elements in an array using Python



n = int(input(“Enter the size of the array. \n”))
arr = []
for i in range(n):
element = int(input())
arr.append(element)
arr.sort()
print(f”The array are: {arr} \n”)
print(f”The sum of the total array are: {sum(arr)}”)
