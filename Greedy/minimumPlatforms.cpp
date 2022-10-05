// C++ program to implement the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number of platforms
// required
int findPlatform(int arr[], int dep[], int n)
{
	// plat_needed indicates number of platforms
	// needed at a time
	int plat_needed = 1, result = 1;

	// Run a nested for-loop to find the overlap
	for (int i = 0; i < n; i++) {

		// Initially one platform is needed
		plat_needed = 1;
		for (int j = 0; j < n; j++) {
			if (i != j)
				// Increment plat_needed when there is an
				// overlap
				if (arr[i] >= arr[j] && dep[j] >= arr[i])
					plat_needed++;
		}

		// Update the result
		result = max(plat_needed, result);
	}
	return result;
}

// Driver Code
int main()
{

	// Train 1 => Arrival : 01:00, Departure : 09:00
	// Train 2 => Arrival : 03:00, Departure : 04:00
	// Train 3 => Arrival : 05:00, Departure : 06:00
	int arr[] = { 100, 300, 500 };
	int dep[] = { 900, 400, 600 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << findPlatform(arr, dep, n);
	return 0;
}

