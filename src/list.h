typedef struct node  {
	int data;
	struct node* next;
	struct node* prev;
} node;

//Creates a new Node and returns pointer to it. 
node* GetNewNode(int);

//Inserts a Node at head of doubly linked list
void InsertAtHead(int, node*);

//Inserts a Node at tail of Doubly linked list
void InsertAtTail(int, node*);

//Prints all the elements in linked list in forward traversal order
void Print(node*);

