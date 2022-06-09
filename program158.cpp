//PPA chi PUNYAI (15000rs WASOOL)

#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyCLL
{
private:	//characterstics
	PNODE Head;
	PNODE Tail;

public :	//behaviours
	SinglyCLL();

	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no,int ipos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int ipos);
	void Display();
	int Count();
};

SinglyCLL::SinglyCLL()
{
	Head=NULL;
	Tail=NULL;
}
void SinglyCLL::InsertFirst(int no)
{
	PNODE newn=NULL;

	newn=new NODE;
	
	newn->data=no;
	newn->next=NULL;

	if((Head==NULL) && (Tail==NULL))	//if LL is empty
	{
		Head=newn;
		Tail=newn;
	}
	else	//if LL contains atleast one node
	{
		newn->next=Head;
		Head=newn;
	}
	Tail->next=Head;
}

void SinglyCLL::InsertLast(int no)
{
	PNODE newn=NULL;

	newn=new NODE;
	
	newn->data=no;
	newn->next=NULL;

	if((Head==NULL) && (Tail==NULL))	//if LL is empty
	{
		Head=newn;
		Tail=newn;
	}
	else	//if LL contains atleast one node
	{
		Tail->next=newn;
		Tail=newn;
	}
	Tail->next=Head;	
}

void SinglyCLL::InsertAtPos(int no,int ipos)
{}

void SinglyCLL::DeleteFirst()
{
	if(Head==NULL && Tail==NULL)	//LL is Empty
	{
		return;
	}
	else if(Head==Tail)		//LL conainc only one node
	{
		delete Head;
		Head=NULL;
		Tail=NULL;
	}
	else					//LL contains more than one node
	{
		Head=Head->next;
		delete Tail->next;

		Tail->next=Head;
	}
}

void SinglyCLL::DeleteLast()
{
	if(Head==NULL && Tail==NULL)	//LL is Empty
	{
		return;
	}
	else if(Head==Tail)		//LL conainc only one node
	{
		delete Tail;
		Head=NULL;
		Tail=NULL;
	}
	else					//LL contains more than one node
	{
		PNODE temp=Head;

		while(temp->next!=Tail)
		{
			temp=temp->next;
		}

		delete Tail;
		Tail=temp;

		Tail->next=Head;
	}
}

void SinglyCLL::DeleteAtPos(int ipos)
{}

void SinglyCLL::Display()
{
	PNODE temp=Head;

	if((Head==NULL)&&(Tail==NULL))	//if LL is empty
	{
		return;
	}

	do
	{
		cout<<"|"<<temp->data<<"|->";		
		temp=temp->next;
	}while(temp!=Tail->next);
	cout<<"|NULL|";
	cout<<endl;
}

int SinglyCLL::Count()
{
	PNODE temp=Head;
	int iCount=0;

	if(Head==NULL && Tail==NULL)
	{
		return 0;
	}

	do
	{
		iCount++;
		temp=temp->next;
	}while(temp!=Head);
	
	return iCount;
}

int main()
{
	int iRet=0;

	SinglyCLL obj;

	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.InsertLast(151);
	obj.InsertLast(201);

	obj.Display();
	iRet=obj.Count();

	cout<<"Number of nodes are: "<<iRet<<endl;

	obj.DeleteFirst();
	obj.DeleteLast();

	obj.Display();
	iRet=obj.Count();

	cout<<"Number of nodes are: "<<iRet<<endl;
	
	return 0;
}