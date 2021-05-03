#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	int n;cin>>n;
	if(n==1){
		cout<<"1";
	}
	if(n==2)
	{
		cout<<"11";
	}
	string str="11";int c=1;
	for (int i = 3; i <=n ; ++i)
	{
		
		//n=3 
		string tmp="";
		for(int j=0;j<str.length();j++)
		{ ///111221
			if(j+1!=str.length() && str[j]==str[j+1])
			{
				++c;
			
				
				
			}
			else
			{

				tmp += to_string(c)+str[j];
								c=1; 

			}
			cout<<"for i:"<<i<<":"<<tmp<<endl;
		}
		str=tmp;
	//	tmp.clear();
		}
	cout<<str<<endl;



	return 0;

}