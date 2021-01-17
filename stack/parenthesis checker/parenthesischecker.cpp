/*Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”

Input:
The first line of input contains an integer T denoting the number of test cases.  Each test case consists of a string of expression, in a separate line.

Output:
Print 'balanced' without quotes if the pair of parenthesis is balanced else print 'not balanced' in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ |s| ≤ 105

Example:
Input:
3
{([])}
()
([]

Output:
balanced
balanced
not balanced*/
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<cstring>
#include<stack>
using namespace std;
void parenthesischecker(string s)
{
	stack <char> stk;
	int flag = 1;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '{' || s[i] == '[' || s[i] == '(')
		{
			stk.push(s[i]);
		}

		else if (!stk.empty() && s[i] == '}' && stk.top() == '{')
		{
			stk.pop();
		}
		else if (!stk.empty() && s[i] == ')' && stk.top() == '(')
		{
			stk.pop();
		}
		else if (!stk.empty() && s[i] == ']' && stk.top() == '[')
		{
			stk.pop();
		}
		else
		{
			flag = 0;
			break;
		}
	}

	if (stk.empty() && flag == 1)
	{
		cout << "balanced" << endl;
	}
	else
	{
		cout << "not balanced" << endl;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputstack.txt", "r", stdin);
	freopen("outputstack.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		cin >> s;
		parenthesischecker(s);

	}
	return 0;
}
