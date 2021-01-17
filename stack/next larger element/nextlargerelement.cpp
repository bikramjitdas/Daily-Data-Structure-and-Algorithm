#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("inputstack.txt", "r", stdin);
	freopen("outputstck.txt", "w", stdout);
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
		std::vector<int> v;
		stack <int> s;
		for (int i = n - 1; i >= 0; i--)
		{

			if (s.empty() == 1)
			{
				v.push_back(-1);

			}
			else if (s.size() > 0 && s.top() > arr[i])
			{
				v.push_back(s.top());
			}
			else if (s.size() > 0 && s.top() <= arr[i])
			{
				while (s.empty() || s.top() > arr[i])
				{
					s.pop();
				}

				if (s.size() == 0)
				{
					v.push_back(-1);
				}
				else
				{
					v.push_back(s.top());
				}
			}
			s.push(arr[i]);
		}
		reverse(v.begin(), v.end());
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;

	}

	return 0;
}