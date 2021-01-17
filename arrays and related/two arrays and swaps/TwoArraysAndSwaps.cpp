#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	//get input from input.txt
	freopen("input.txt", "r", stdin);
	//get output from output.txt
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin >> t;
	while (t--)
	{
		int n, k , val = 0, value = 0, sum = 0;

		std::vector<int> a;
		std::vector<int> b;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> value;
			a.push_back(value);
		}
		for (int i = 0; i < n; i++)
		{
			cin >> val;
			b.push_back(val);
		}



		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<int>());
		for (int i = 0; i < n; i++)
		{
			if (k > 0) {

				if (a[i] < b[i])
				{
					a[i] = b[i];
					k--;
				}

			}
		}


		for (int i = 0; i < n; i++)
		{
			sum += a[i];
		}
		cout << sum << endl;


	}
	return 0;
}
