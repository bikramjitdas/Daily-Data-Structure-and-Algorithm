#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

// Optimized method to find equilibrium index of an array
void equilibriumIndex(int A[], int n)
{
	// total stores sum of all elements of the array
	int t = accumulate(A, A + n, 0);

	// right stores sum of elements of sub-array A[i+1..n)
	int right = 0;

	// traverse array from right to left as we are computing right sub array sum
	for (int i = n - 1; i >= 0; i--)
	{
		// sum of elements of left sub-array A[0..i-1] is
		// (total - (A[i] + right))
		if (right == t - (A[i] + right)) {
			cout << i + 1 << '\n';
			return;
		}

		// new right = A[i] + (A[i+1] + A[i+2] + .. + A[n-1])
		right += A[i];
	}

	cout << "-1" << endl;
}


int main()
{
	int test ;
	cin >> test ;


	while (test--)
	{
		int n;
		cin >> n;

		int A[n];

		for (int i = 0; i < n; i++)
		{	cin >> A[i];
		}


		equilibriumIndex(A, n);
	}


	return 0;




}