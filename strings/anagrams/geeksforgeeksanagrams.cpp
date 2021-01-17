#include<iostream>
#include<bits/stdc++.h>
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

		int H[26] = {0};
		string str;
		string str2;
		cin >> str;
		cin >> str2;
		if (str.size() == str2.size())
		{
			int i;
			for (i = 0; str[i] != '\0'; i++)
			{
				H[str[i] - 97] += 1;
			}
			for (i = 0; str2[i] != '\0'; i++)
			{
				H[str2[i] - 97] -= 1;
				if (H[str2[i] - 97] < 0)
				{
					cout << "NO" << endl;
					break;
				}
			}
			if (str2[i] == '\0')
			{
				cout << "YES" << endl;
			}
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}