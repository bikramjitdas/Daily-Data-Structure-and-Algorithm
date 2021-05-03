// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    // function to count ways to reach mth stair
    int countWays(int m){
        
    int fib[m+1];
    //solve this problem using memoization
     fib[0]=1;
     fib[1]=1;
    for(int i=2;i<=m;i++)
    {
        //find the other terms
        fib[i] = (fib[i-1]+fib[i-2])%1000000007 ;
    }
        return fib[m];
        
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends