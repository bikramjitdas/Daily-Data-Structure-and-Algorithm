/*Given a string, the task is to remove duplicates from it. Expected time complexity O(n) where n is length of input string and extra space O(1) under the assumption that there are total 256 possible characters in a string.

Note: that original order of characters must be kept same.

Input:
First line of the input is the number of test cases T. And first line of test case contains a string.

Output:
Modified string without duplicates and same order of characters.

Constraints:
1 <= T <= 15
1 <= |string|<= 1000

Example:
Input:
2
geeksforgeeks
geeks for geeks

Output:
geksfor
geks for

** For More Input/Output Examples Use 'Expected Output' option **
Author: kartik */
//first I will find out the duplicates using hashmap
//then I will do
#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	//code
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s1;
		getline(cin, s1);
		int H[256] = {0};
		for (int i = 0; s1[i] != '\0'; i++)
		{
			H[s1[i] - 97] += 1;
		}
		for (int i = 0; i < 256; i++)
		{
			if (H[i] > 1)
			{
				//printf("%c\n", i + 97); show the duplicate letters
				H[i] -= 1;
			}
		}
		for (int i = 0; i < 256; i++)
		{
			if (H[i] == 1)
			{
				//printf("%c\n", i + 97); show the duplicate letters
				printf("%c\n", i + 97);

			}
		}

	}
	return 0;
}