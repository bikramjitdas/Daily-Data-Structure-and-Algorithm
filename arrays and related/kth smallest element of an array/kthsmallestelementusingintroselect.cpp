#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n;
		std::vector<int> a;
		int value = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> value;
			a.push_back(value);
		}
		cin >> k;
		k--;
		nth_element(a.begin(), a.begin() + k, a.end());
		cout << a[k] << endl;
	}
	return 0;
}