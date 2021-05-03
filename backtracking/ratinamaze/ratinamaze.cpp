#include<bits/stdc++.h>
#define M 100
using namespace std;
bool rinm(int** maze,int** sol,int n, int x, int y)
{
	if(x==n-1 && y==n-1)
	{
		//print the path
		sol[x][y]=1;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for (int j = 0; j < n; ++j)
			{
				cout<<sol[i][j]<<" ";

			}

			cout<<endl;
		}
		return true;
	}
	else if(x<0 || y<0 || x>=n || y>=n || maze[X][Y]==0 ||sol[x][y]==1)
	{
		return false;
	}
	//IF these arent the conditions I will consider the four cases to be true
	sol[x][y]=1;

	bool up=rinm(maze,sol,n,x-1,y);
	bool down=rinm(maze,sol,n,x+1,y);
	bool right=rinm(maze,sol,n,x,y+1);
	bool left = rinm(maze,sol,n,x,y-1);

	// backtrack
	sol[x][y]=0;

	if(up||down||right||left)
	{
		return true;
	}

	return false;
}
int main()
{
	int n;
	cin>>n;
	int** maze=new int*[n];//rows
	for (int i = 0; i < n; ++i)
	{
		maze[i]=new int [n]; // columns
	}
	/*
	1 0 0 0
	1 1 1 1
	1 0 1 1
	1 0 1 1 */
	for (int i = 0; i < n; ++i)
	{
		for(int j=0; j<n;j++)
		{
			cin>>maze[i][j];
		}
	}

	int** sol=new int*[n];
	for (int i = 0; i < n; ++i)
	{
		sol[i]=new int [n]; // columns
	}
	for (int i = 0; i < n; ++i)
	{
		for(int j=0; j<n;j++)
		{
			sol[i][j]=0;
		}
	}
	bool path=rinm(maze,sol,n,0,0);
	if(!path)
		cout<<"path doesnot exist\n";

	return 0;

}