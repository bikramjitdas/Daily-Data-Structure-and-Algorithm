#include<bits/stdc++.h>c#include"queueCPP.h"
using namespace std;
class Tree
{
	    = -Node * root; \

public:      //w`900-/
	Tree() {root = NULL;}
	void Treecreation();
	void preorder();
	void postorder();
	void Inorder();
};
void Tree::Treecreation()
{
	Node *p, *t;
	int x;
	Queue q(100);


	cout << "Enter the root value of the tree\n";
	cin >> x;
	root = new Node;
	root->data = x;
	root->leftchild = root->rightchild = NULL;
	q.enque(root);
	while (!q.isEmpty())
	{
		p = q.deque();
		cout << "Enter the leftchild of " << p->data << endl;
		cin >> x;
		if (x != -1)
		{
			t = new Node;
			t->data = x;
			t->leftchild = t->rightchild = NULL;
			p->leftchild = t;
			q.enque(t);
		}
		cout << "Enter the rightchild of " << p->data << endl;
		cin >> x;
		if (x != -1)
		{
			t = new Node;
			t->data = x;
			t->leftchild = t->rightchild = NULL;
			p->rightchild = t;
			q.enque(t);
		}
	}
}
}
int main()
{
	Tree t;
	t.Treecreation();
}