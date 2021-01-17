#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;//n denotes the size of the array,q denotes the number of queries
	cin >> n ; //
	int a[n + 4];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[i] + a[j] == a[k])
				{
					count++;
				}
			}
		}
	}
	cout << count;
	return 0;
}