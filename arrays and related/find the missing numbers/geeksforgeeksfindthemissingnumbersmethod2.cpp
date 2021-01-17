
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
		for (int i = 0; i < (n - 1)  ; i++)
		{
			cin >> value;
			v.push_back(value);
		}
		long sumofnnumber = ((n * (n + 1)) / 2);
		long sumofarray = 0, ans;
		for (int i = 0; i < n - 1 ; i++)
		{
			sumofarray += v[i];
		}
		ans = (sumofnnumber - sumofarray);
		cout << ans << endl;
	}
	return 0;
}





