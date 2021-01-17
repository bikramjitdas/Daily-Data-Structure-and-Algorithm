/*Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines of input. The first line of each test case consists of an integer N(size of array) and an integer K separated by a space. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each test case, print the modified array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N, K ≤ 107
1 ≤ A[i] ≤ 1018

Example:
Input
2
5 3
1 2 3 4 5
6 2
10 20 30 40 50 60

Output
3 2 1 5 4
20 10 40 30 60 50

Explanation:
Testcase 1: Reversing groups in size 3, first group consists of elements 1, 2, 3. Reversing this group, we have elements in order as 3, 2, 1.
*/
#include<bits/stdc++.h>
#include<vector>
#include<stack>
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
		int n, k;
		cin >> n >> k;
		int a[n + 4];
		stack <int> s1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (s1.size() < k)
			{
				s1.push(a[i]);
			}
			else
			{
				while (!s1.empty())
				{
					cout << s1.top() << " ";
					s1.pop();
				}
				s1.push(a[i]);
			}

		}
		while (!s1.empty())
		{
			cout << s1.top() << " ";
			s1.pop();
		}
	}
	return 0;
}