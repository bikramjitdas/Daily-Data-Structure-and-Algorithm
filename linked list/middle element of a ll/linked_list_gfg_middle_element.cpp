/*Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, if given linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 3
Example 2:

Input:
LinkedList: 2->4->6->7->5->1
Output: 7
Your Task:
The task is to complete the function getMiddle() which takes a head reference as the only argument and should return the data at the middle node of the linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
#include<bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node {
	int data;
	Node* next;

	Node(int x) {
		data = x;
		next = NULL;
	}

};

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{

}