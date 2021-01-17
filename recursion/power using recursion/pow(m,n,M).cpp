#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long int pow(long long int x, long long int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return pow((x * x) , n / 2);
	else
		return x * pow((x * x) , (n - 1) / 2);
}




int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("inputrecursion.txt", "r", stdin);
	freopen("outputrecursion.txt", "w", stdout);
#endif
	long long int x, n;
	cin >> x >> n ;
	cout << pow(x, n);


	return 0;
}