
def countLen(str):
	count = 0	
	for i in str:
		count += 1
	return count


str = str(input("Enter String:"))
print(countLen(str))
