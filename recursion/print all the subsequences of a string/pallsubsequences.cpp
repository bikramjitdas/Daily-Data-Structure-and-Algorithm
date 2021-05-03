#include<bits/stdc++.h>
using namespace std;
void palls(string inp,string out)
{
	if(inp.size()==0)
	{
		cout<<out<<endl;
		return;
	}
	palls(inp.substr(1),out);
	palls(inp.substr(1),out+inp[0]);

}
int main(){
	string inp;
	cin>>inp;
	string out="";
	palls(str,out);
}