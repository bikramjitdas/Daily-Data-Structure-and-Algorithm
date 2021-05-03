#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int prime(int n){
    
    int flag = 0;
    for(int i=2;i*i<=n;i++) 
    {
        if(n%i==0)
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
    int n1,n2;
    cin>> n1>>n2; //n ==7
    for(int i=n1;i<=n2;i++)
    {
        if(prime(i)) cout<<i<<endl;
    }
  return 0; 
}