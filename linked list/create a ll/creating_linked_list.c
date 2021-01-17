//this program performs major operations on linked list

#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*first = NULL;

//function to create  a linked list
void create(int a[], int n)
{
	int i;
	struct Node *temp, *last;
	first = (struct Node *)malloc(sizeof(struct Node));
	first->data = a[0];
	first->next = NULL;
	last = first;
	for (i = 1; i < n; i++)
	{
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data = a[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
}
//function to display linked list
void display(struct Node *p)
{
	while (p)
	{
		printf("%d\n", p->data );
		p = p->next;
	}
}

//function to count the elements in a linked list
int count_elements(struct Node *p)
{
	int count = 0;
	while (p)
	{
		count++;
		p = p->next;
	}
	return count;
}


//inserting in linked list
void insert(struct Node *p, int index, int x)
{
	struct Node *temp;
	if (index < 0 || index > count_elements(p))
	{
		return;
	}

	temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = x;
	if (index == 0)
	{
		temp->next = first;
		first = temp;
	}
	else
	{
		for (int i = 0; i < index - 1; i++)
		{
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



	int a[] = {3, 5, 6, 3, 2, 56};
	create(a, 6);
	insert(first, 0, 8);
	display(first);
	printf("%d", count_elements(first));
	return 0;
}

