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

		stack <int> s; int count = 0; int maxi = 0;
		for (int i = 0; i < n; i++)
		{
			/* code */
			if (arr[i] == 1)
			{
				s.push(arr[i]);
			}
			else if (arr[i] == 0)
			{	count = 0;
				while (!s.empty())
				{

					s.pop();
					count++;
					maxi = max(count, maxi);
				}
			}
		}
		cout << maxi << endl;
	}
	return 0;
}