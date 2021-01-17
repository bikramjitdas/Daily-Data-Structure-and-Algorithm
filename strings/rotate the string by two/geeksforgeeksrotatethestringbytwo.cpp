#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
string reverse(string &s1, int s, int e)
{
	while (s < e)
	{
		swap(s1[s], s1[e]);
		s += 1;
		e -= 1;

	}
	cout << s1 << endl;
	return s1;
}//in my program I have only checked for the
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
		string s2;
		getline(cin, s1);
		getline(cin, s2);
		int r = 2;
		int len = s1.length();
		//cout << len << endl;
		/*reverse(s1, 0, len - r - 1 );
		reverse(s1, len - r, len - 1);
		reverse(s1, 0, len - 1); right reversal of the string*/
		//left rotation of an array

		reverse(s1, 0, r - 1);
		reverse(s1, r, len - 1);
		reverse(s1, 0, len - 1);
		if (s1.compare(s2) != 0)
		{
			cout << "0" << endl;
		}
		else
		{
			cout << "1" << endl;
		}

	}
	return 0;
}