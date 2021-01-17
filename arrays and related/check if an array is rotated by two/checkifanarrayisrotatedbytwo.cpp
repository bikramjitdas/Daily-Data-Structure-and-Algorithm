#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
bool checkifrotated(string s1, string s2)
{	//0 1 2 3 4 5
	//a z o n a m
	//first the right rotation break into a z o n
	//break to a m
	string s2_a = s2.substr( s2.length() - 2, s2.length()); //starting index_length upto which
	string s2_b = s2.substr(0, s2.length() - 2);
	string s3 = s2_a + s2_b;
	//cout << s3 << endl;
	if (s3 == s1)
	{
		return 1;
	}
	//now its turn for left rotation
	//0 1 2 3 4 5
	//a z o n a m
	//first break first to a z
	//break to o n a m
	string s2_1 = s2.substr(2, s2.length());
	string s2_2 = s2.substr(0, 2);
	string s3_final = s2_1 + s2_2;
	//cout << s3_final << endl;
	if (s3_final == s1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

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
		string s1;
		string s2;
		getline(cin, s1);
		getline(cin, s2);
		cout << checkifrotated(s1, s2) << endl;
	}
	return 0;
}