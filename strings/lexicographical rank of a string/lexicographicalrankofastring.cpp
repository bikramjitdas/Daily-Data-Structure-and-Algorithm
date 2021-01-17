//find the lexicographic rank of a string
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int factorial(int n)
{
	if (n == 0)	{
		return 1;
	}
	return n * factorial(n - 1);
}
int lexicorank(string s)
{
	int rank = 1;
	int n = s.length();
	int facto = factorial(n);
	int H[256] = {0};
	//count the string
	for (int i = 0; s[i] != '\0'; i++)
		H[s[i]]++;
	//cumulative count of the array
	for (int i = 1; i < 256; i++)
	{
		H[i] = H[i] + H[i - 1];
	}
	for (int i = 0; i < n; i++)
	{
		facto = facto / (n - i);
		rank += H[s[i] - 1] * facto;

		for (int j = s[i]; j < 256; j++)
		{
			H[j]--;
		}
	}
	return rank % 1000003;
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
	while (t--)
	{
		string s;
		cin >> s;
		int result = lexicorank(s);
		cout << result << endl;
	}
}