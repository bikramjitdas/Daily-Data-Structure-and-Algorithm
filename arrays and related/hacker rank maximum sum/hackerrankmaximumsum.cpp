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

	long int arr[n];

	for (int i = 0; i < n; i++)

		cin >> arr[i];

	long int sum = 0;

	long int prevsum;

	prevsum = sum;

	int k = 0;

	int flag = 0;

	int max = INT_MIN;

	for (int i = 0; i < n; i++)

	{

		if (arr[i] > 0)

		{

			flag = 1;

			break;

		}

		if (max < arr[i])

			max = arr[i];




	}

	if (flag == 1)

	{

		for (int i = 0; i < n; i++)

		{

			sum = sum + arr[i];

			if (prevsum > sum)

			{

				sum = prevsum;

				k++;

			}

			prevsum = sum;

		}

		cout << sum << " " << n - k;

	}

	else

	{

		cout << max << " " << "1";

	}

}
