#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	//allocate memory for node(dynamically)
	//intialize that node
	
	//check whether LL is empty or not
	//if LL is empty then new node is first node so update it's address in first pointer through head
	
	//if LL is not empty then store the address of first node in the next pointer of our new node
	//update the first pointer through head
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));	//newn=(sturct node*)malloc(sizeof(struct node))

	newn->data=no;
	newn->next=NULL;

	if(*head==NULL)//LL is empty
	{
		*head=newn;
	}
	else	//LL contains atleast 1 node
	{
		newn->next=*head;
		*head=newn;
	}
}

void InsertLast(PPNODE head,int no)
{
	//allocate memory for node(dynamically)
	//intialize that node
	
	//check whether LL is empty or not
	//if LL is empty then new node is first node so update it's address in first pointer through head
	
	//if LL is not empty then 
	//travel till last node of LL
	//store the address of new node in the next pointer of last node

	PNODE newn=NULL;
	PNODE temp=NULL;

	newn=(PNODE)malloc(sizeof(NODE));	//newn=(sturct node*)malloc(sizeof(struct node))

	newn->data=no;
	newn->next=NULL;

	if(*head==NULL)//LL is empty
	{
		*head=newn;
	}
	else	//LL contains atleast 1 node
	{
		//travel till last node
		//store address of new node in the next pointer of last node
		temp=*head;
	
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}

void Display(PNODE head)
{
	printf("Elements from linkedlistare: \n");

	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt=0;

	while(head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	return iCnt;
}

void DeleteFirst(PPNODE head)
{
	//if LL is empty then return
	//if LL contains atleast one node then
	//store the address of second node in the first pointer through head
	//and delete the first node
	PNODE temp=NULL;

	if(*head==NULL)	//LL is empty
	{
		return;
	}
	else	//LL contains atleast one node
	{
		temp=*head;
		*head=temp->next;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	//if LL is empty return
	//if L contains one node delete that node and return 
	//if LL contains more than one node then travel till second last node and delete last node

	PNODE temp=NULL;
	if(*head==NULL)	//LL is empty
	{
		return;
	}
	else if((*head)->next==NULL)	//LL contains one node
	{
		free(*head);
		*head==NULL;
	}
	else 	//if LL contains more than one node
	{
		temp=*head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}

		free(temp->next);
		temp->next=NULL;
	}
}

int main()
{
	int iRet=0;
	PNODE first=NULL;

	InsertFirst(&first,101);	//call by address
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);

	Display(first);	//call by value

	iRet=Count(first);
	printf("Number of nodes are: %d\n",iRet);

	InsertFirst(&first,1);

	Display(first);	//call by value

	iRet=Count(first);
	printf("Number of nodes are: %d\n",iRet);

	InsertLast(&first,111);
	InsertLast(&first,121);

	Display(first);	//call by value

	iRet=Count(first);
	printf("Number of nodes are: %d\n",iRet);

	DeleteFirst(&first);

	Display(first);	//call by value

	iRet=Count(first);
	printf("Number of nodes are: %d\n",iRet);

	DeleteFirst(&first);

	Display(first);	//call by value

	iRet=Count(first);
	printf("Number of nodes are: %d\n",iRet);

	DeleteLast(&first);
	Display(first);	//call by value

	iRet=Count(first);
	printf("Number of nodes are: %d\n",iRet);

	
	return 0;
}