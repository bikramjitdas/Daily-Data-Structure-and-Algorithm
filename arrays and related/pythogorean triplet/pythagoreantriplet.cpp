#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int pythagoreantriplet(int arr[], int n)
{

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = i + 1; j < n; j++)
		{
			sum = arr[i] + arr[j];
			for (int i = 0; i < n; i++)
			{
				if (sum == arr[i]) {
					return 1;
					break;
				}

			}
		}
	}
	return 0;
}

int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputarrays.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{	int n;
		cin >> n;
		int arr[n + 4];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i] * arr[i];
		}
		cout << pythagoreantriplet(arr, n);
	}
	return 0;
}
