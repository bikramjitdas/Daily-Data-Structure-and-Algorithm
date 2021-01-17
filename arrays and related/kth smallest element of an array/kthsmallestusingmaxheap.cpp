#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int kthsmallest(int a[], int k, int n)
{
	priority_queue <int> maxh;
	for (int i = 0; i < n; i++)
	{
		maxh.push(a[i]);
		if (maxh.size() > k)
		{
			maxh.pop();
		}
	}
	return maxh.top();
}
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
		int n, k;
		cin >> n;

		int a[n + 4];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cin >> k;
		cout << kthsmallest(a, k, n) << endl;
	}
	return 0;
}
