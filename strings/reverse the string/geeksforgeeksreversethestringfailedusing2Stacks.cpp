#include<iostream>
#include<stack>
#include<cstring>
#include<queue>
using namespace std;
int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	char ch;
	char str[2001];
	char str2[2001];
	cin.getline(str, 2001);
	stack <char> s1;
	stack <char> s2;

	int i;
	for ( i = 0; i < strlen(str); i++)
	{
		s1.push(str[i]);
		if (str[i] == '.')
		{
			break;
		}

	}
	i = i + 1;
	for ( i = i + 1; i < strlen(str); i++)
	{
		s1.push(str[i]);
		if (str[i] == '.')
		{
			break;
		}

	}

	while (!s1.empty())
	{

		char ch = s1.top();
		s1.pop();
		s2.push(ch);

	}

	while (!s2.empty())
	{
		cout << s2.top();
		s2.pop();
	}
	return 0;
}