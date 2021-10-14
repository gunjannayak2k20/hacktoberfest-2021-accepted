def counting_sort(arr):
    # Get list size
    n = len(arr)
    # Array with ordered output numbers
    output = [0] * n
    # Array of counting numbers and initialized with 0
    x = [0] * 256
    # Save the amount of each number
    for i in range(0, n):
        x[arr[i]] += 1
    # Getting the position of the number to the output array
    for i in range(1, 256):
        x[i] += x[i - 1]
    # Decreasing an index so it doesn't exceed the size of the output array
    i = n - 1
    # Building the output array
    while i >= 0:
        output[x[arr[i]] - 1] = arr[i]
        x[arr[i]] -= 1
        i -= 1
    # Copy ordered output array to arr
    for i in range(0, n):
        arr[i] = output[i]


arr = [4, 2, 2, 8, 3, 3, 1, 5, 9, 7, 10, 0, 6]
counting_sort(arr)
print("Sorted number array is:", arr)
