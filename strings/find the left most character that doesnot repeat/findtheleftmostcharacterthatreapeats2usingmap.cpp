#include<bits/stdc++.h>
#include<string>
using namespace std;
int leftmostcharacter(string str)
{
	map <char, int> mp;
	int i = 0;
	while (i < str.length())
	{
		if (mp.find(str[i]) == mp.end())
		{
			mp[str[i]] = i;

		}
		else
		{
			return mp[str[i]];
		}
		i++;
	}
	return -1;
}
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
		cout << leftmostcharacter(str) << endl;

	}
	return 0;

}
