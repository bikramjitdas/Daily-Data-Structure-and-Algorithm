#include<bits/stdc++.h>
#include<set>
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
		int n; //n denotes the size of the array
		cin >> n;
		int j;
		int count = 0; //
		int a[n + 4];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			for ( j = i + 1; j < n; j++)
			{
				if (a[j] >= a[i])
				{
					break;

				}

			}
			if (j == n)
			{
				cout << a[i] << " ";
			}
		}
		cout << a[n - 1];
	}
	return 0;
}
