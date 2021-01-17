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
	cin >> t;
	while (t--)
	{
		std::vector<int> v;
		int n, sum = 0;
		int value = 0;
		cin >> n;
		for (int i = 0; i < n ; i++)
		{
			cin >> value;
			v.push_back(value);
		}
		int result = 0;
		for (int i = 0; i < v.size(); i++)
		{
			result  =  result ^ v[i];
		}
		int result1 = 0;
		for (int i = 0; i < n; i++)
		{
			result1 = result1 ^ i;
		}
		cout << result ^ result1 << endl;
	}
	return 0;
}
/*
TECH DOSE
8 months ago
// Function to get the missing number
int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];

    // For xor of all the elements from 1 to n+1
    int x2 = 1;

    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];

    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}*/