#inclu//Today we are going to write a program that will convert the given array to max heap
//just add a single line for heapsort in build heap
#include<bits/stdc++.h>
using namespace std;
/*
//algo:
1. Take input of the array
2. Build heap , ie, start from n/2 - 1 here it is from 11/2 - 1 4th index element = 6 
   last non leaf node is given by the formula n/2-1 where n is the size of the array
      
           suppose i am considering this example                                                
                      the given array is [1 3 5 4 6 13 10 9 8 15 17]
												complete binary	tree will be
															    	         

															    	        1
															            /       \
															         3               5
																  /     \         /    \
 																4	      6     13       10
													 		 /    \      /   \
															9      8   15    17

3. call the heapify function recursively for(n/2-1) element to 0th element */

void heapify(int arr[], int i, int n)
{
	int largest =i; //let us consider the current index to be the largest for here in this tree it is 4
	int lc = 2*i+1; // this gives the index of the left child  (9)-->15
	int rc = 2*i+2;// this gives the index of the right child  (10)-->17 from the given example

	//now check if left child is there and if its larger than the root
	if(lc<n && arr[lc]>arr[largest])
		largest = lc; //make largest the leftchild index   (from example it is index 9 (6<15) so largest = 9 for now)
	//now check if right child is there and if its larger than the root(largest)
	if(rc<n && arr[rc]> arr[largest])
		largest = rc; //make largest the right child index (so largest = 10 now as 15<17) 
	if(largest != i)
	{    
		swap(arr[i],arr[largest]); //6 and 17 has been swapped
		//repeat the process
		heapify(arr,largest,n); 
	}

}
void buildheap(int arr[],int n){
	 int startindex = n/2 -1;
	 for(int i=startindex;i>=0;i--)
	 {
	 	heapify(arr,i,n); //lets see the heapify funv now
	 }

	 for (int i = n-1; i >= 0; i--)
	 {
	 	swap(arr[i],arr[0]);
	 	heapify(arr,1,i);
	 }

}
int main()
{
	int n; //n is the size of the array
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	buildheap(arr,n);
	for(int i=0;i<n;i++)
		{
			cout<<arr[i];
		}

		return 0;  //let us run the code
} 