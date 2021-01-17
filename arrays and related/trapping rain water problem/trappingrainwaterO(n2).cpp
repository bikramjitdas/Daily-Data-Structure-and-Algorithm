#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n + 4];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
	int result = 0;
	int left_max ; int right_max ;
	for (int i = 1; i < (n - 1); i++)

	{
		left_max = right_max = arr[i];
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > left_max)
			{
				left_max = arr[j];
			}
		}
		for (int j = (i + 1); j < n; j++)
		{
			if (arr[j] > right_max)
			{
				right_max = arr[j];
			}
		}
		result = result + (min(right_max, left_max) - arr[i]);

	}
	cout << result << endl;
}