#include<bits/stdc++.h>
#include<math.h>
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
	for (int i = 0; i < n; i++)
	{
		if (a[abs(a[i])] > 0)
		{
			a[abs(a[i])] *= -1;
		}
		else

		{
			cout << i << " " << "is being repeated!";
		}
	}

	return 0;

}