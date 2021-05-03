#include<bits/stdc++.h>
#define MAX 1000
#define ll long long int
using namespace std;
int getfact(ll resultantarr[], ll arr_size, int loop_iteration)
{
		ll carry = 0 ; ll result;
		for (int i = 0; i < arr_size; i++)
		{
			result = resultantarr[i] * loop_iteration + carry;
			resultantarr[i] = result % 10;
			carry = result /10;
		}

		while(carry)
		{
			resultantarr[arr_size++] = carry % 10;
			carry = carry/10;
		}

		return arr_size;
}
int main()
{
  ll n;
  cin>>n;
  ll resultantarr[MAX];
  resultantarr[0]=1;
  ll arr_size = 1;
  for (int i = 2; i < =n ; i++)
  {
  	 getfact(resultantarr,arr_size,i);
  }

  for (int i = arr_size; i >= 0; i--)
  {
  	cout<<resultantarr[i];
  }

  return 0;

}