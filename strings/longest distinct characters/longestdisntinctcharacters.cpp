//Longest Distinct characters in string with no substring
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
	cin.ignore();
	while (t--)
	{
		string s1;
		getline(cin, s1);
		int H[256] = {0};
		int count = 0;
		for (int i = 0; s1[i] != '\0'; i++)
		{
			H[s1[i]] += 1;
		}
		for (int i = 0; i < 256; i++)
		{
			if (H[i] > 0)
			{
				//printf("%c\n", i + 97); show the duplicate letters
				count++;
			}
		}
		cout << count << endl;

	}
	return 0;
}