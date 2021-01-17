#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n; //n denotes the size of the array
		cin >> n;
		int j;
		int value = 0; //
		long a[n + 4];
		std::vector<int> b;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int maxi = INT_MIN;

		for (int i = n - 1; i >= 0; i--)
		{
			if (a[i] >= maxi)
			{
				b.push_back(a[i]);
				maxi = a[i];
			}
		}
		std::vector<int>:: reverse_iterator it = b.rbegin();
		for (  it ; it != b.rend(); it++)
		{
			cout << *it << " " ;
		}

		cout << endl;
	}
	return 0;
}