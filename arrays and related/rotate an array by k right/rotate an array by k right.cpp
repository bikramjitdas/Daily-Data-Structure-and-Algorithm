#include<bits/stdc++.h>
using namespace std;
void reversearray(int *arr,int s,int n)
{

	int left=s;
	int right=n;
	while(left<=right)
	{
		swap(arr[left],arr[right]);
		left++;
		right--;
	}



}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;//k denotes the number of rotations 
	int arr[n+1];
	//I will take input of the array now

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	//if k<0 change it to k+n;
	if(k<0)
		{
			k = k+n;
		}
		k=k%n;

	

		reversearray(arr,0,n-k-1);
		reversearray(arr,n-k,n-1);
		reversearray(arr,0,n-1);
		//clock and anticlock logic
	reversearray(arr,0,k-1); //7-3-1 3
	reversearray(arr,k,n-1);
	reversearray(arr,0,n-1);

		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
	
	

}