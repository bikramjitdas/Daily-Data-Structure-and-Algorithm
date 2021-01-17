//find the index whose occurence is smallest
#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	using namespace std;
	int main()
	{
		//code
		int t;
		cin >> t;
		while (t--)
		{
			string s;
			cin >> s;
			int H[256] = {0};
			int flag = 0;
			for (int i = 0; i < s.length(); i++)
			{
				H[s[i]] += 1;
				if (H[s[i]] > 1)
				{
					flag = 1;
					cout << s[i] << endl;
					break;
				}
			}
			if (flag == 0)
			{
				cout << "-1" << endl;
			}
		}
		return 0;
	}