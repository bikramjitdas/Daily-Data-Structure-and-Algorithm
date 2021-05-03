#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int getfact(int arr[],int size,int loop)
{
	long long result; 
	long long carry =0;
	for(int i=0;i<size;i++)
	{
		result = arr[i]*loop + carry;
		arr[i] = result%10;
		carry = result /10;

	}
	while(carry)
	{
		arr[size] = carry%10;
		carry/=10;
		size++;
	}
	return size;
}
int main()
{
	int arr[MAX];
	int n;
	cin>>n;
	//5 factorial 120
	arr[0]=1;
	int size = 1;
	for(int i=2 ; i<=size ; i++)
	{
		size=getfact(arr,size,i);
	}
	for (int i = size-1; i>=0;i--)
	{
		cout<<arr[i];
	}
	return 0;
}