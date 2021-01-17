#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int count1(char str1[],  char strcheck[])
{
	int i, j = 0, c1 = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == strcheck[j])
		{
			j++;
		}
		else if (str1[i] == strcheck[0])
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		if (strcheck[j] == '\0')
		{
			c1++;
			j = 0;
		}
	}
	return c1;
}
int count2( char str2[], char strcheck[])
{
	int i, j = 0, c2 = 0;
	for (i =  0;  str2[i] != '\0'; i++)
	{
		if (str2[i] == strcheck[j])
		{
			j++;
		}
		else if (str2[i] == strcheck[0])
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		if (strcheck[j] == '\0')
		{
			c2++;
			j = 0;
		}
	}
	return c2;
}
int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputarrays.txt", "w", stdout);
#endif
	int t;
	cin >> t;

	while (t--)
	{
		char str1[] = "SUVOJIT";
		char str2[] = "SUVO";
		char strcheck[151];
		gets(strcheck);
		int co1 = count1(str1, strcheck);
		int co2 = count2(str2, strcheck);
		cout << co1 << co2 << endl;
	}
	return 0;
}