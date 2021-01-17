#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputarrays.txt", "w", stdout);
#endif
	int i, j, found = 0;
	char str1[100];
	char str2[100];
	cin >> str1 >> str2;
	gets(str2);
	for (i = 0; i < str1[i] != '\0'; i++)
	{
		if (str1[i] == str2[0])
		{
			j = 0;
			found = 1;
			for (j = 0; j < str2[j] != '\0'; j++)
			{
				if (str1[i + j] != str2[j])
				{
					found = 0;
					break;
				}
			}
		}
		if (found == 1)
		{
			break;
		}
	}
	if (found == 1)
		cout << i << endl;
	else
		cout << "-1";
	return 0;
}

