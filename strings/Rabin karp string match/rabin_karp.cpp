#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define prime 13
#define d 256
//HERE i WILL BE WRITING THE CODE FOR rabin karp
using namespace std;
ll hashvaluecreate(string pattern, int m)
{
	ll presult = 0;
	//now calculate the presult that is apply hash function the pattern and text first
	for (int i = 0; i < m; ++i)
	{
		presult += (ll)(pattern[i] * pow(prime, i));
	}
	return presult;
}
ll hashfunc(string pattern, ll oldHash, int oldIndex, int newIndex, int m)
{
	ll newhash = oldHash - text[oldIndex];
	newhash /= prime;
	newhash += (ll)(text[newIndex] * pow(prime, m - 1));
	return newhash;
}
bool checkforequal(string pattern, string text, int start1, int start2, int end1, int end2)
{
	if (end2 - start2 != end1 - start1)
	{
		return false;
	}
	while (start1 <= end1 && start2 <= end2)
	{
		if (str1[start1] != str2[start2])
		{
			return false;
		}
		start1++;
		start2++;
	}
	return true;
}
int main()
{

	string text;
	cin >> text;
	string pattern;
	cin >> pattern;
	//firstly I need to find the length of the text and the pattern
	int n = text.size();
	int m = pattern.size();
	ll patternhash = hashvaluecreate(pattern, m);
	ll texthash = hashvaluecreate(text, m);
	for (int i = 0; i < n - m; i++)
	{
		/* code */
		if (patternhash == texthash && checkforequal(pattern, text, 0, m , i, m));
		{
			cout << i << endl;
			return 0;
		}
		if (i < n - m)
		{
			texthash = hashfunc(text, i, i + m, texthash, m);
		}
	}
	return 0;
}










}