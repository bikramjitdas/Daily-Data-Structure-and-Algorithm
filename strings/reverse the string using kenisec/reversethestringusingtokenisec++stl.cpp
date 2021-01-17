#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	char ch[] = ".";
	char *p;
	p = ch;
	char str[2001];
	char str2[2001];
	cin.getline(str, 2001);
	stack <char *> s1;
	char *tokenise = strtok(str, ".");

	while (tokenise != NULL)
	{
		s1.push(tokenise);
		tokenise = strtok(NULL, ".");
		if (tokenise != NULL)
		{
			s1.push(p);
		}
	}

	while (!s1.empty())
	{
		cout << s1.top()  ;

		s1.pop();
	}
	return 0;
}