//hey guys today we will be looking at insertion sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n; //take the size of the array
	int arr[n+1];
	for (int i = 0;i<n;i++)
	{
		cin>>arr[i]; // take the array
	}
	//lets consider the following array
	//insertion sort 2 3 1 4 5 7
	//first 2-->3 compare
	//index 0 is considered already sorted so , we will start the loop from index 1

	for(int i=1;i<n;i++)
	{
		//so I will compare element 2 and 3 for that i will take a loop from 0, but this will keep on changing so it will be from i-1 
		//this will continue
		for (int j=i-1;j>=0;j--)
		{
			if(arr[j]>arr[j+1]) //2 > 3 ? no! then no need to swp and break
			{
				swap(arr[j],arr[j+1]);
			}
			else
			{
				break;
			}
		}
	}
 
  	for(int i =0;i<n;i++) cout<<arr[i]<<" ";

  		return 0;

}