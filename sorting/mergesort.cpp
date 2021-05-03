#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    // 6 5 3 2 1 4 7
    // 0 1 2 3 4 5 6
    int n1=mid-low+1;
    int n2=high-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i] = arr[i+low];
    }
    for(int j=0;j<n2;j++)
    {
        R[j] = arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=low;
    //int tmp[n1+n2];
     while(i<n1 && j<n2)
         {
             if(L[i]<=R[j])
             {
                 arr[k]=L[i];
                 i++;
                 k++;
             }
             else
             {
                 arr[k]=R[j];
                 j++;
                 k++;
             }
         }
         while(i<n1)
         {
             arr[k]=L[i];
                 i++;
                 k++;
         }
         while(j<n2)
         {
             arr[k]=R[j];
                 j++;
                 k++;
         }
         
         
       

    
}
void mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
       // arr[0]=low;
    
    int mid = (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    
    int low = 0;
    int high = n-1;
    mergesort(arr,low,high);
     for(int i=0;i<n;i++)
         cout<<arr[i]<<" "<<endl;
    return 0;
}

	