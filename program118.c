//Singly Linear Linked List
/*
	InsertFirst
	InsertLast
	InsertAtPosition
	
	DeleteFirst
	DeleteLast
	DeleteAtPosition
	
	Display
	Count
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//juna nav			Nawin nav
//struct node 		NODE
//struct node*		PNODE
//struct node**		PPNODE

/*
1 	Allocate memory for node
2 	Initialize the node
3	check wheathe LL is empty or not
4	if LL empty the new node is the first node
5 	if LL contains atleast one node in it then store address of previous first node in the next pointer of new node

*/
void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iNo;
	newn->next=NULL;

	if(*Head==NULL)		//if LL is empty	
	{
		*Head=newn;
	}
	else	//if LL contains at least one node
	{
		newn->next=*Head;
		*Head=newn;
	}
}

int main()
{
	PNODE First=NULL;	//struct node* First=NULL;

	InsertFirst(&First,101);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);

	return 0;
}

