#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	//get input from input.txt
	freopen("input.txt", "r", stdin);
	//get output from output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n + 4];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int count[n + 1] = {0};
	for (int i = 0; i < n; i++)
	{
		count[a[i]]++;
	}
	for (int i = 0; i < n + 1; i++)
	{
		if (count[i] > 0)
		{
			cout << i << " " << count[i] << " Times" << "\n";
		}
	}

	return 0;

}