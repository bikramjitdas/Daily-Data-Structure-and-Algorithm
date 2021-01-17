//left most character that doesnot repeats itself
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int result = INT_MAX;
		int H[256];
		for (int i = 0; i < 256; i++)
		{
			H[i] = -1;
		}

		for (int i = 0; i < s.length(); i++)
		{
			if (H[s[i]] == -1)
			{
				H[s[i]] = i;
			}
			else
			{
				H[s[i]] = -2;
			}
		}
		for (int i = 0; i < 256; i++)
		{
			if (H[i] >= 0)
			{
				result = min(result, H[i]);
			}
		}

		(result == INT_MAX) ? cout << "-1 " << endl : cout << s[result] << endl;
	}

	return 0;
}