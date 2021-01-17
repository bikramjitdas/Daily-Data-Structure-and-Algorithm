//finding t//finding the maximum sum of subarray
/*Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.

Constraints:
1 ≤ T ≤ 110
1 ≤ N ≤ 106
-107 ≤ A[i] <= 107

Example:
Input
2
5
1 2 3 -2 5
4
-1 -2 -3 -4
Output
9
-1*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t ;
	while (t--)
	{
		std::vector<int> a;
		int value = 0;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> value;
			a.push_back(value);

		}
		long long sum = 0, max = 0;
		int x = *max_element(a.begin(), a.end());
		if (x < 0)
		{
			cout << x << endl;
		}
		else {
			for (int i = 0; i < a.size(); i++)
			{
				sum += a[i];
				if (sum < 0)
				{
					sum = 0;
				}
				else if (sum > max)
				{
					max = sum;
				}
			}
			cout << max << endl;
		}
	}
	return 0;
}