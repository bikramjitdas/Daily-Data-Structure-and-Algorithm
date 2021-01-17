#include<bits/stdc++.h>
using namespace std;
class Node
{
	//class to create the left and right child of a tree
public:
	Node *leftchild;
	int data;
	Node *rightchild;

}
class Queue
{
private:
	int size;
	int front, rear;
	Node **Q;
	Queue()
	{
		size = 10;
		front = rear = -1;
		Q = new Node*[size];
	}
	Queue(int size)
	{
		this->size = size;
		front = rear = -1;
		Q = new Node*[this->size];
	}
	void enque(Node* x);
	Node *deque();
	void display();
}

Queue::void enque()
{

}