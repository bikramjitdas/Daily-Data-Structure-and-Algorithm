#include<bits/stdc++.h>
#include<string>
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
	cin.ignore();
	while (t--)
	{
		string str;
		cin >> str;
		int i = 0, c = 0, len = 0;
		map <char, int> mp;
		while (i < str.length())
		{
			if (mp.find(str[i]) == mp.end())
			{
				mp[str[i]] = i;
				c++;
			}
			else
			{
				if (len < c)
				{
					len = c;
				}
				i = mp[str[i]];
				c = 0;
				mp.clear();
			}
			i++;
		}
		if (len < c)
		{
			len = c;
		}
		cout << len << endl;
	}
	return 0;
}
