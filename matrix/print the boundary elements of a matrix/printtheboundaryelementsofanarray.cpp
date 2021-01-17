//check out gfg submission for another version important

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n][n];
		int i, j;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				cin >> a[i][j];
		}
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
			{
				for (j = 0; j < n; j++)
				{
					cout << a[i][j] << " ";
				}
			}
			else if (i == n - 1)
			{
				for (j = 0; j >= 0; j--)
				{
					cout << a[i][j] << " ";
				}
				for (j = n - 2; j > 0; j--)
				{
					cout << a[j][0] << " ";
				}
			}
			else
			{
				cout << a[i][n - 1] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}