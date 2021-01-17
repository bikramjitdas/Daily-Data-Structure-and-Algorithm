#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputarrays.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	std::vector<int> v; int k = 0;
	int value = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		v.push_back(value);
	}
	sort(v.begin(), v.end(), greater<int>());
	long int sum = 0;
	long int maximum = *max_element(v.begin(), v.end());
	if (maximum < 0)
	{
		cout << maximum << " " << "1";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{

			if (v[i] >= 0)
			{
				sum = sum + v[i]; k++;
			}
			else
			{
				continue;
			}

		}
		cout << sum << " " << k;
	}

	return 0;
}