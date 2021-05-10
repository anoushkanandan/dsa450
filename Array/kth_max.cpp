// Simple C++ program to find k'th smallest element
#include <algorithm>
#include <iostream>
using namespace std;

// Function to return k'th smallest element in a given array
int kthLargest(int arr[], int n, int k)
{
	// Sort the given array
	sort(arr, arr + n);

	// Return k'th element in the sorted array
	return arr[n-k];
}

// Driver program to test above methods
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]), k = 2;
	cout << "K'th largest element is " << kthLargest(arr, n, k);
	return 0;
}
