#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputarrays.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n;

		std::vector<pair<int, int>> v;
		std::vector<int> arr (n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cin >> k;
		int j;
		for (int i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i != j && arr[i] - arr[j] == k)
				{
					v.push_back({arr[i], arr[j]});
				}
			}
		}

		sort(v.begin(), v.end());
		int size = unique(v.begin(), v.end()) - v.begin();
		cout << size << endl;
	}
	return 0;
}
