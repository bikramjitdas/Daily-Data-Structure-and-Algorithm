#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n, j; //n denotes the size of the array
		cin >> n;
		int count = 0; //
		int a[n + 4];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		multiset <int> s;
		s.insert(a[0]);
		multiset <int>::iterator it;
		for (int i = 1; i < n; i++)
		{
			s.insert(a[i]);
			it = s.upper_bound(a[i]);
			count += distance(it, s.end());
		}
		cout << count << endl;
	}
}