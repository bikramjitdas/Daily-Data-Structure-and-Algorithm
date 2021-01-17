//this program has a complexity of o(n^2)
#include<bits/stdc++.h>
#define Right 1
#define left 0
using namespace std;
void rotateanarray(int a[], int dir, int shift_count, int n)
{
	int temp;
	if (dir == Right)
	{
		while (shift_count--)
		{
			temp = a[n - 1];
			for (int i = n - 1; i >= 1; i--)
			{
				a[i] = a[i - 1];
			}
			a[0] = temp;
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << endl;
		}

	}
	else if (dir == left)
	{
		while (shift_count--)
		{
			temp = a[0];
			for (int i = 0; i <= n - 2; i++)
			{
				a[i] = a[i + 1];
			}
			a[n - 1] = temp;
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << endl;
		}

	}
}
int main()
{
	//coded
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int a[5] = {10, 20, 30, 40, 50};
	int shift_count = 2;
	rotateanarray(a, Right, shift_count, 5);
	return 0;
}