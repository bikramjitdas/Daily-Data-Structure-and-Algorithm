#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    //get input from input.txt
    freopen("input.txt", "r", stdin);
    //get output from output.txt
    freopen("output.txt", "w", stdout);
#endif

    int t, a1, b1, a2, b2;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> b1 >> a2 >> b2;
        int max1, max2;
        max1 = max(a1, b1);
        max2 = max(a2, b2);
        if (max1 == max2)
        {
            int min1, min2;
            min1 = min(a1, b1);
            min2 = min(a2, b2);
            if ((min1 + min2 == max1))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }

    }
    return 0;
}
