//brute force
//some logical errors are there

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

		int m = 0;
		for (int i = 0; i < str.length() - 1; i++)
		{
			int len = 1;
			for (int j = i + 1; j < str.length(); j++)
			{
				if (str[i] == str[j])
				{
					m = max(len, m);
					break;
				}
				len++;
			}
		}
		cout << m << endl;
	}
	return 0;
}