#include<bits/stdc++.h>
#include<math.h>
#define ll long long
#define d 10

using namespace std;
int main()
{
	string text;
	cin >> text;
	string pat;
	cin >> pat;
	ll n = text.size();
	ll m = pat.size();
	ll p = 0;
	ll t = 0;
	ll prime = 119;
	cout << n << " " << m << endl;
	//find out the highest power of hash that you are going to subtract from the initial hash
	ll h = (ll) pow(d, m - 1) % prime;
	//calculate the initial hash function
	for (int i = 0; i < m ; ++i)
	{
		/* code */
		p = (d * p + pat[i]) % prime;
		t = (d * t + text[i]) % prime;
	}
	cout << p << " " << t << endl;
	int j = 0;
	for (int i = 0; i <= n - m; i++)
	{
		//if the pattern matches
		if (p == t)
		{
			for (j = 0; j < m; j++)
			{
				//match each character
				if (pat[j] != text[i + j])
				{
					break;
				}

			}
			if (j == m)
			{
				cout << "Index at" << i << endl;
			}
		}


		t = (d * (t - text[i] * h)  + text[i + m]) % prime;
		if (t < 0)
		{
			t = t + prime;
		}

	}
	return 0;
}