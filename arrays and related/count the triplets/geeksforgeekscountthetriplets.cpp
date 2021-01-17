/*Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106

Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	std::vector<int> v;
	int n, value = 0, sum = 0;
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> value;
		v.push_back(value);
	}
	/*for (i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n";



	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			sum = v[i] + v[j];
			s.push_back(sum);
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << s[i] << " ";
	}
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == s[i])
			{
				count++;
			}
			else
			{
				cout << "-1";
			}
		}
	}*/
	int count = 0;
	sort(v.begin(), v.end());
	for (int i = v.size(); i >= 0; i--)
	{
		int j = 0;
		int k = i - 1;
		while (j < k)
		{
			if (v[j] + v[k] < v[i])
			{
				j++;
			}
			else if (v[j] + v[k] == v[i])
			{
				count++;
			}
			else if (v[j] + v[k] > v[i])
			{
				k--;
			}
		}

	}
	if (count > 0)
	{
		cout << count << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
}

