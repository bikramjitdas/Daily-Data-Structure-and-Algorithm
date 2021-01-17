#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int n ;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)cin >> a[i];
		int k;
		cin >> k;
		k--;
		nth_element(a, a + k, a + n);
		cout << a[k] << endl;
	}
}