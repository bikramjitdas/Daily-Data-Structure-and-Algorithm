#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct  Job
{
	int j;
	int deadline;
	int profit;
};
int minvalue(int x, int y)
{
	if (x < y)
		return x;
	return y;
}
void jobsequencinggreedy(Job jobs[], int n)
{
	int k;
	vector<int> timeslot(n);
	int timeslotsfilled = 0;
	int maximumdeadline = 0; //dmax
	//this maximumdeadline will give us the number of slots required
	for (int i = 0; i < n; ++i)
	{
		if (jobs[i].deadline > maximumdeadline)
		{
			maximumdeadline = jobs[i].deadline;
		}
	}
	for (int i = 0; i < maximumdeadline; ++i)
	{
		timeslot[i] = -1; //fill the empty slots with -1
	}
	for (int i = 0; i < n; ++i)
	{
		k = minvalue(maximumdeadline, jobs[i].deadline);

		{
			if (timeslot[k] == -1)
			{
				timeslot[k] = i;

				timeslotsfilled++;
				break;
			}
		}
		if (timeslotsfilled == maximumdeadline)
		{
			break;
		}

	}
	cout << "Hence Your Job Sequencing Order is:\n";
	for (int i = 0; i < maximumdeadline; ++i)
	{
		cout << jobs[timeslot[i]].j << "\t time " << i << endl;

	}
	int maxprofit = 0;
	for (int i = 0; i < maximumdeadline; ++i)
	{

		maxprofit += jobs[timeslot[i]].profit;
		cout << "Maxprofit:" << maxprofit << endl;
	}
	cout << "Here's Your Profit Dear\n" << maxprofit << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputforjobsequencing.txt", "r", stdin);
	freopen("outputforjse.txt", "w", stdout);
#endif
	Job jobs[5];
	cout << "Enter the number of jobs \n";
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter the job:" << endl;
		cin >> jobs[i].j;
		cout << "Enter the deadline:" << endl;
		cin >> jobs[i].deadline;
		cout << "Enter the profit:" << endl;
		cin >> jobs[i].profit;
	}
	//show the user the jobs entered
	cout << "So the jobs are\n Jobs\t deadline\t profit\t\n";
	cout << "------------------------------------------------\n";
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << jobs[i].j << "\t" << jobs[i].deadline << "\t" << jobs[i].profit << endl;
	}
	//first we need to sort the jobs according to their descending order
	//apply bubble sort...u can use anyshort here as per ur convinience
	Job temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			/* code */
			if (jobs[j + 1].profit > jobs[j].profit)
			{
				temp = jobs[j + 1];
				jobs[j + 1] = jobs[j];
				jobs[j] = temp;
			}
		}
	}
	jobsequencinggreedy(jobs, n);
	return 0;

}
