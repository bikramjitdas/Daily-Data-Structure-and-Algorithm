/*Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation :
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, sum; //n denotes the size of the array,q denotes the number of queries
		cin >> n >> sum; //
		int a[n + 4];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int subsum = 0;
		int i = 0, start = 0,  flag = 0;
		while (i <= n)
		{
			if (sum == subsum)
			{
				flag++;
				break;
			}
			else if (subsum < sum)
			{
				subsum = subsum + a[i];
				i++;

			}
			else
			{
				subsum = subsum - a[start];
				start++;
			}


		}
		if (flag > 0)
		{
			cout << start + 1 << " " << i << endl;
		}
		else {
			cout << "-1" << endl;
		}


	}
}