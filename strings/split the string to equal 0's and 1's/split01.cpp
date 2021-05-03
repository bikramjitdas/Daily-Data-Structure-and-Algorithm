//split the strings into 0's and 1's
//for an equal no of 0's and 1's we need to return the count of such cases where we have equal no of zeros and ones else print -1
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("spinp.txt", "r", stdin);
	freopen("spop.txt", "w", stdout);
#endif
 // I will simply travrse the array n count the no of 0's and 1's if they are EQUAL I will
	//increase the total count else I will return -1
	int c1=0;
	int c2=0;
	int total_count=0;
	string s;
	cin>>s;
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='0')
			c1++;
		else
			c2++; //assuming I have been given a binary string only
		if(c1==c2)
		{
			total_count++; //increas only when equal no of 0's and 1's
		}

		i++;
	}
	cout<<total_count<<endl;
	
	return 0;
}