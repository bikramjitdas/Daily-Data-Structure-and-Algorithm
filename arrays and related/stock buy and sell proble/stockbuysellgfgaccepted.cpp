#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

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
	{
		int n;
		cin >> n;
		int arr[n + 4];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int count = 0;
		for (int i = 1; i < n; i++)
		{
			if (arr[i - 1] < arr[i])
			{
				cout << "(" << i - 1 << " ";
				i++;
				while (i < n)
				{
					if (arr[i - 1] < arr[i])
					{
						i++;
					}
					else
					{
						break;
					}

				}
				cout << i - 1 << ")" << " ";
				count++;
			}


		}
		if (count == 0)
		{
			cout << "No Profit";
		}
		cout << endl;
	}
}