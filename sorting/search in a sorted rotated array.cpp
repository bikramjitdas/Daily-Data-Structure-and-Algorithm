//please check pepcoding problem for finding pivot
//search in a sorted rotated array
#include<bits/stdc++.h>

using namespace std;

int performBs(int arr[],int low,int high,int key,int index)
{
	
		if(arr[index] == key)
		{
			int keyindex = index;
			return keyindex;
		}
		if(key>arr[index])
		{
			performBs(arr,index+1,high,key);
		}
		else
		{
			 performBs(arr,low,index-1,key);
		}
}

int pivotBs(int arr[],int low,int high)
{

	if(low == high)
		return 0;

	while(low<high)
	{
		int mid = (low + high)/2;
		if(arr[mid]>arr[low])
		{
			low = mid + 1;
		}
		else
		{
			hi = mid;
		}
	}
	
	
	cout<<hi<<arr[hi]<<endl;

	return hi;
	
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < nn; ++i)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int low = 0;
	int high = n-1;
	int index = pivotBs(arr,low,high);
	int ans = performBs(arr,low,high,key,index);
	cout<<ans<<endl;

	return 0;

}