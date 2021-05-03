//print upto prime numbers from x to n and their sum
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int prime(int n){
    
    int flag = 0;
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++) 
    {
        if(n%i==0 )
        {
            flag=1;
            break;
        }
   
    }
    if(flag == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{   
    long long sum =0 ;
    int n1,n2;
    cin>> n1>>n2; //n ==7
    for(int i=n1;i<=n2;i++)
    {
        if(prime(i)) { cout<<i<<endl; sum += i;}
    }
    cout<<sum;
  return 0; 
}