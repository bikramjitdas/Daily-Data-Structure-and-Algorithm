#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int h[n + 4];
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> h[i];

	}
	int l = 0, r = n - 1;
	int leftmax = 0;
	int rightmax = 0;
	while (l < r)
	{
		if (h[l] < h[r])
		{
			if (h[l] > leftmax)
			{
				leftmax = h[l];
			}
			else
			{
				answer = answer + leftmax - h[l];
			}
			l++;
		}
		else
		{
			if (h[r] > rightmax)
			{
				rightmax = h[r];
			}
			else
			{
				answer = answer + rightmax - h[r];
			}
			r--;
		}
	}
	cout << answer << endl;
}
