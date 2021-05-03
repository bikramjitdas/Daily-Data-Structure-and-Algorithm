#include<bits/stdc++.h>
using namespace std;
string s={";","abc","def","ghi","jkl","mnop","qrst","uvwx";"yz"};
vector<string> phonekeypad(string str)
{
	//base case
	if(str.length()==0)
	{
		vector <string> rresult;
		rresult.push_back("");
		return rresult;
	}



	//123
	//1 23
	char ch=str[0];
	std::vector<string> resulltuptonow = phonekeypad(str.substr(1)); //23
	//this is my actual result
	vector<string> result;
	string strforcharch = s[ch-'0'];
	for(int i=0;i<strforcharch.length();i++)
	{
		char eachch = strforcharch[i];
		for(auto i: resulltuptonow)
		{
			result.push_back(i+eachch);

		}


	}
	return result;


}
int main()
{
	string str;
	cin>>str;
	vector<string> ans =phonekeypad(str);
	for(auto i:ans)
	{
		cout<<i<<endl;
	}
	return 0;
}