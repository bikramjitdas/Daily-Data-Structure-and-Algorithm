
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


  //Code starts from here //
  int t;
  cin >> t;
  while (t--)
  {


    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    int i;
    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    sort(b, b + n, greater<int>());
    sort(a, a + n);
    int j = 0;
    for (i = 0; i < n; i++)
    {
      if (k > 0)
      {
        if (a[i] < b[i])
        {
          a[i] = b[i];
          k--;
        }
      }
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
      sum += a[i];
    }
    cout << sum << endl;

    // Code end here //
  }
}
