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
		int n;
		cin >> n;
		int arr[n + 4];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int current = 0; int result = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == 0)
			{
				current = 0;
			}
			else
			{
				current++;
				result = max(result, current);
			}
		}
		cout << result << endl;
	}
	return 0;
}