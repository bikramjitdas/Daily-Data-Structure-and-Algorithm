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
		int H[256] = {0}; int mark = 0;
		for (int i = 0; i < str.length(); i++)
		{
			H[str[i]] += 1;
			if (H[str[i]] > 1)
			{
				mark = i;
				break;
			}

		}
		cout << mark - 1 << endl;
	}
	return 0;
}