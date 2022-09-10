
#include <bits/stdc++.h>
using namespace std;
#define maxElements 4

class Node
{
	public:
	int numElements;
	int array[maxElements];
	Node *next;
};

void printUnrolledList(Node *n)
{
	while (n != NULL)
	{
		
		for (int i=0; i<n->numElements; i++)
			cout<<n->array[i]<<" ";

		n = n->next;
	}
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->numElements = 3;
	head->array[0] = 1;
	head->array[1] = 2;
	head->array[2] = 3;

	head->next = second;

	second->numElements = 3;
	second->array[0] = 4;
	second->array[1] = 5;
	second->array[2] = 6;

	second->next = third;

	third->numElements = 3;
	third->array[0] = 7;
	third->array[1] = 8;
	third->array[2] = 9;
	third->next = NULL;

	printUnrolledList(head);

	return 0;
}


