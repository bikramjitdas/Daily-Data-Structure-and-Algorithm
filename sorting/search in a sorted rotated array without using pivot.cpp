#include<bits/stdc++.h>
using namespace std;
int findindex(int arr[],int l,int r,int key)
{
	int mid = (l+r)/2;
	while(l<=r)
	{	
		if(key == mid)
		{
			return mid;
		}
		// 2 4 5 6 0 1 3
		// 0 1 2 3 4 5 6
		if(arr[mid]>=arr[l])
		{
			if(key<arr[mid])
			{
				r = mid-1;
			}
			else
			{
				l = mid + 1;
			}
		}
		else
		{	

			//  7 0 1 3 5
			//  0 1 2 3 4 
			if(key> arr[mid])
			{
				l = mid+1;
			}
			else
			{
				r = mid -1;
			}




		}


		return -1;
   }
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
	int index = findindex(arr,l,h,key);
	cout<<index<<"\n";

	return 0;
}