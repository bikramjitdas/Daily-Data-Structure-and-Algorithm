//this problem is not solved by this method and needs modification
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

		int count = 0;
		int l = 0;

		for (int i = 0; i < n; i++)
		{

			int r = i + 1;
			if (arr[i + 1] - arr[i] > 0)
			{
				r++;
				count ++;

			}
			else
			{
				if (count > 0)
				{
					cout << l << " ";
					l = r;
					cout << (r - 1) << " " ;
					r++;
				}
				else
				{
					count = -1;
				}

			}

		} cout << endl;
		if (count == -1)
		{
			cout << "No profit" << endl;
		}
	}
}