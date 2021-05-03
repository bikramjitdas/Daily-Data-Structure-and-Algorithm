#include<bits/stdc++.h>
using namespace std;
void longestpstring(string str, int n)
{
	//we will be using dp to solve the problem
	// this is similar to the count the palindromes problem just we need to find the longest 
	//palindromic string
	bool dp[n][n];
	memset(dp,false,sizeof(dp));
	//move by the diagonal
	int i=0,j=0;
	for (int gap = 0; gap<n ; gap++)
	{  
		//move by the rows and columns 
		for (i = 0,j=gap; j < n; i++,j++)
		{
				//put the conditions
				if(gap==0)//
				{
					dp[i][j]=true;
				}
				if(gap==1)
				{
					if(str[i]==str[j])
					{

						dp[i][j]=true;
					}
				}
				else
				{
					if(str[i]==str[j] && dp[i+1][j-1]==true)
						dp[i][j]=true;
				}
		}
	}	
	for (int i = 0; i < n; ++i)
	{
			for (int j = 0; j< n; ++j)
			{
			    cout<<dp[i][j]<<" ";
			}
        cout<<endl;
	}
	
	int max_i=0;
	int max_j=0;
	int diff=0;
	int newdiff=0;
	for (int i = 0; i < n; ++i)
	{
			for (int j = 0; j< n; ++j)
			{
				if(dp[i][j]==1 && i!=j)
				{
					if(j>max_j)
					{   
					   if(j-i>max_j-max_i)
					   {
					   	max_i=i;
						max_j=j;
					   }
						
					}
				}
			}

	}
	for(int i=max_i;i<=max_j;i++)
	{
	    cout<<str[i];
	}
}
int main()
{
	string str;
	cin>>str;
	int n=str.length();
	longestpstring(str,n);
}