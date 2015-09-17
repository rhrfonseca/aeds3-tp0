#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char const *argv[])
{

	/*Driver code to test the implementation*/
	node* head = NULL; // empty list. set head as NULL.
	head = GetNewNode(1);
	
	// Calling an Insert and printing list both in forward as well as reverse direction. 
	InsertAtTail(2, head); Print(head);
	InsertAtTail(4, head); Print(head);
	InsertAtTail(8, head); Print(head);
	/* code */
	return 0;
}