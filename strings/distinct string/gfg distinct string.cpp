#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		set<string> ans;
		string token;
		int count = 0;
		for (int i = 0; s[i] != '\0'; i++)
		{
			token = s.substr(i, 2);
			ans.insert(token);
		}
		for (auto it : ans)
		{
			if (it.length() == 2)
				count ++;
		}
		cout << count << endl;
	}
	return 0;
}