#include<bits/stdc++.h>
#include<algorithm>
#include<set>
using namespace std;
int main()
{

	int s[] = {1, 2, 4, 1, 5, 8, 9, 11, 13};
	int f[] = {2, 5, 7, 8, 9, 10, 11, 14, 16};
	//We need to find the activities selected
	//and the no of activities
	int n;
	n = sizeof(s) / sizeof(int);
	//	cout << n;
	sort(f, f + n);
	int i = 0;
	set <int> activities;
	activities.insert(i + 1);
	int count = 0;
	for (int j = 1; j < n; j++)
	{
		if (s[j] >= f[i])
		{
			//count++;
			//cout<<"count :"<<count;
			activities.insert(j);
			i = j;
		}
	}
	set <int> ::iterator it;
	for (it = activities.begin(); it != activities.end(); it++)
	{
		cout << "activities selected: " << *it << endl;
		count++;
	}
	cout << "Total Count: " << count << endl;

}