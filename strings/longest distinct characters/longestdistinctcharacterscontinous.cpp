// Longest Distinct characters in string with no substring
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
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
		char str[100001];
		cin >> str;
		int i = 0, j = 0;
		int maxim = 0;
		std::vector<char> v;
		std::vector<char>::iterator p = v.begin();
		/*	for (start; start < s1.length(); start++)
		{
			if (s1[start] == s1[end])
			{
				maxim = max(end - start, maxim);
				//start++;
				end = start;
			}
			else
			{
				s.insert(s1[end]);
				end++;
				maxim++;
			}
		}

		cout << maxim << endl;
		}

		}*/
		/*while (start < s1.length())
		{
			if (s.insert(s1[end]).second)
			{
				end++; maxim = max(maxim, end - start);
			}
			else
			{
				s.erase(s1[start]);
				start++;
			}
		}
		cout << maxim << endl;*/

		while (str[j] != '\0')
		{
			v.push_back(str[j]);
			if (str[i] == str[j])
			{
				v.erase(i);
				i++;
			}
			maxim = max(j - i + 1, maxim);
			j++;

		}
		cout << maxim << endl;

	}
	return 0;
}
