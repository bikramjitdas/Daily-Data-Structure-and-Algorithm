#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	//code
#ifndef ONLINE_JUDGEb
	freopen("input.txt", "r", stdin);
	freopen("outputarrays.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n + 4];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		int current = 0;
		for (int j = i; j < n; j++)
		{
			current = current + arr[j];
			result = max(current, result);
		}
	}
	cout << result;
	return 0;
}