#include <bits/stdc++.h>
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
		int platform_inuse = 0; //
		int maxnumberofplat = 0;
		int arr[n + 4];
		int dep[n + 4];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> dep[i];
		}
		sort(arr, arr + n);
		sort(dep, dep + n);
		int i = 0;
		int j = 0;
		while (i < n && j < n)
		{
			if (arr[i] < dep[j])
			{
				platform_inuse++;
				if (platform_inuse > maxnumberofplat)
				{
					maxnumberofplat = platform_inuse;
				}
				i++;

			}
			else
			{
				platform_inuse--;
				j++;
			}
		}
		cout << maxnumberofplat <<  endl;
	}
	return 0;
}
