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
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 4];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i = i + k)
		{
			int p = i;
			//this part is tricky
			int q = min(((i + k) - 1), n - 1);
			while (p < q)
			{
				swap(a[p], a[q]);
				p++;
				q--;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
