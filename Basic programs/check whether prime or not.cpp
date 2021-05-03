//check for prime or not_eq
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>> n; 
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
        float sqroot = sqrt(n);
        printf("%d is a prime number %.2f",n,sqroot);
    }
    else
    {
        cout<<n<<" is not prime"<<endl;
    }
}