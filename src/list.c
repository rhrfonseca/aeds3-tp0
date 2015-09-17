#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//Creates a new Node and returns pointer to it. 
node* GetNewNode(int x) {
	node* newNode
		= (node*)malloc(sizeof(node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Inserts a Node at head of doubly linked list
void InsertAtHead(int x, node* head) {
	node* newNode = GetNewNode(x);
	// if(head == NULL) {
	// 	head = newNode;
	// 	return;
	// }
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

//Inserts a Node at tail of Doubly linked list
void InsertAtTail(int x, node* head) {
	node* temp = head;
	node* newNode = GetNewNode(x);
	// if(head == NULL) {
	// 	head = newNode;
	// 	return;
	// }
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}

//Prints all the elements in linked list in forward traversal order
void Print(node* head) {
	node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}


