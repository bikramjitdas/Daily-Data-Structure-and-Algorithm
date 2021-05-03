#include<bits/stdc++.h>
using namespace std;
int countpalindromestring(string str,int n)
{
	bool dp[n][n];
	memset(dp,false,sizeof(dp));
	int count=0;
	int i,j;
	for (int gap=0;gap<n;gap++) //this loop is for traveling by the diagonals
	{
		// - - - - -
		for( i=0, j=gap;j<n;i++,j++) // from where my diagonal will start and end
		{
			if(gap==0)
			{
				dp[i][j]=true;
			}
			else if(gap==1)
			{
				if(str[i]==str[j]) //a b c c b c
				{
					dp[i][j]=true;
				}
			}
			else
			{
				if(str[i]==str[j] && dp[i+1][j-1]==true)
				{
					dp[i][j]=true;
				}
				else
					{
						dp[i][j]=false;
					}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			/* code */
			if(dp[i][j]==true)
			{
				count++;
			}
		}
		
	}
	
	return count;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
#endif
	string str;
	cin>>str;
	int n=str.length();
	int call=countpalindromestring(str,n);
	cout<<call<<endl;
	return 0;
}