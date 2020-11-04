//Print array elements using Recursion
// C++ Program to print 
// an Array using Recursion 

#include <bits/stdc++.h> 
using namespace std; 

// Recursive function to print the array 
void print_array(int arr[], int size, int i) 
{ 

	// base case 
	if (i == size) { 
		cout << endl; 
		return; 
	} 

	// print the ith element 
	cout << arr[i] << " "; 
	i++; 

	// recursive call 
	print_array(arr, size, i); 
} 

// Driver code 
int main() 
{ 

	int arr[] = { 3, 5, 6, 8, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	print_array(arr, n, 0); 

	return 0; 
} 
