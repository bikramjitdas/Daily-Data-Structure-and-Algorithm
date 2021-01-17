#include<stdio.h>
#include<iostream>
using namespace std;
class Queue {
private:
	int front, rear;
	int data;
	int size;
	int *Q;
public:
	Queue() {

		front = rear = -1;
		size = 10;
		Q = new int[size];
	}
	Queue(int size)
	{
		front = rear = -1;
		this->size = size;
		Q = new int[this->size];
	}
	void enque(int x);
	int deque();
	//void display();
};

void Queue::enque( int x)
{
	if (rear == size - 1)
	{
		cout << "Queue is full\n";
	}
	else
	{
		rear++;
		Q[rear] = x;
		cout << Q[rear] << endl;
	}
}
int Queue::deque()
{
	int temp = -1;
	if (front == rear)
	{
		cout << "Queue is empty\n";
	}
	else
	{

		temp = Q[front + 1];
		cout << "Deleted element is:" << temp << endl;
		front++;


	}
	return temp;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("inputbinar.txt", "r", stdin);
	freopen("outputbinar.txt", "w", stdout);
#endif
	int size;
	cout << "Enter the size of the queue\n";
	cin >> size;
	Queue q(size);
	q.enque(10);
	q.enque(20);
	q.enque(30);
	q.enque(40);
	q.enque(50);
	q.enque(60);
	q.deque();
	q.deque();
	q.deque();
	q.deque();
	q.deque();
	q.deque();


	return 0;
}