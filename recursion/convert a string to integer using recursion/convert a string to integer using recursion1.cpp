#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int r = 0;
int stringtoint(string s, int len)
{

	if (len == 0)
		return r;

	r =  r * 10 + s[len - 1] - '0' ;



}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputrecursion.txt", "r", stdin);
	freopen("outputrecursion.txt", "w", stdout);
#endif
	string s = "321";
	int len = s.length();
	cout << stringtoint(s, len);

	return 0;

}