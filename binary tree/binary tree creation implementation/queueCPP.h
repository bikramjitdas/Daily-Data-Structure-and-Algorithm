//include this as header file
//this is going to be the background for the tree
#include<stdio.h>
#include<iostream>
using namespace std;
class Node
{
	//class to create the left and right child of a tree
public:
	Node *leftchild;
	int data;
	Node *rightchild;

};
class Queue {
private:
	int front, rear;
	int data;
	int size;
	Node **Q;
public:
	Queue() {

		front = rear = -1;
		size = 10;
		Q = new Node*[size];
	}
	Queue(int size)
	{
		front = rear = -1;
		this->size = size;
		Q = new Node*[this->size];
	}
	void enque(Node* x);
	int isEmpty() { return front == rear; }
	Node* deque();
	//void display();
};

void Queue::enque( Node* x)
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
Node* Queue::deque()
{
	Node* temp = NULL;
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
	freopen("inputbinary.txt", "r", stdin);
	freopen("outputbinary.txt", "w", stdout);
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