//calculating presum of an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, q; //n denotes the size of the array,q denotes the number of queries
	cin >> n >> q; //
	int a[n + 4];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long int pre[n + 4] = {0};
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		pre[i] = sum + a[i];
		sum = sum + a[i];
		cout << pre[i] << " ";
	}

	while (q--)
	{
		int l, r;
		cin >> l >> r;
		long long int ans;
		ans = pre[r];
		if (l - 1 >= 0)
		{
			ans = ans - pre[l - 1];
		}
		cout << "hey user ur answer is " << ans << endl;
	}



}