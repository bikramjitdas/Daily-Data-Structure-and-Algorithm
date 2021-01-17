#include<bits/stdc++.h>
using namespace std;
#define ll long long int
long merge(ll arr[], ll temp[], ll start, ll mid, ll end)
{
	ll i, j, k;
	i = start;
	j = end;
	k = start;
	ll count = 0;
	while ((i <= mid - 1) && (j <= end))
	{
		if (arr[i] <= arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] = arr[j++];
			count += (mid - i);
		}
	}
	while (i <= mid - 1)
	{
		temp[k++] = arr[i++];
	}
	while (j <= end)
	{
		temp[k++] = arr[j++];
	}
	for (int a = start; a <= end; a++)
	{
		arr[a] = temp[a];
	}

	return count;

}
long mergesort(ll arr[], ll temp[], ll start, ll end)
{	ll  mid;
	ll count = 0;
	if (start < end)
	{
		mid = (start + end) / 2;

		count += mergesort(arr, temp, start, mid);
		count += mergesort(arr, temp, mid + 1, end);
		count += merge(arr, temp, start, mid + 1, end);
	}
	return count;
}



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
		int n; //n denotes the size of the array
		cin >> n;
		//
		ll arr[n + 4];
		ll temp[n + 4];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << mergesort(arr, temp, 0, n - 1) << endl;
	}
	return 0;
}