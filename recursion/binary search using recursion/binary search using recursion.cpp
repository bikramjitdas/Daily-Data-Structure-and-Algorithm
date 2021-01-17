#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int BS(int arr[], int l, int h, int element)
{
	int mid = (l + h) / 2;
	//int flag = 0;
	if (l > h)
		return -1;

	if (arr[mid] == element)
	{
		return mid;
	}
	else if (element < arr[mid])
	{
		return BS(arr, l, h / 2 - 1, element);

	}
	else
	{
		return BS(arr, h / 2 + 1, h, element);
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputrecursion.txt", "r", stdin);
	freopen("recursionop.txt", "w", stdout);
#endif
	int arr[6] = {1, 3, 5, 7, 12, 15};
	int l = 0;
	int h = 5;
	int element = 5;
	int index = BS(arr, l, h, element);
	cout << index << endl;
	return 0;
}