/*you will be given an Oarray with only 0 and 1 as their elements you have to answer q queries
in which every query will have a range of l to r and you have to answer if all elements
 are same in that range or not */
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
	cout << endl;
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
		int numberofelements = r - l + 1;
		if (ans == 0)
		{
			cout << "YES  and the no of elements: " << numberofelements << endl;
		}
		else
		{
			if (ans == numberofelements)
			{
				cout << "YES  and the no of elements: " << numberofelements << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}



}