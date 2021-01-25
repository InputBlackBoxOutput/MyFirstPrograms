/*Program to implement singly linked list
  Created on 5 March 2019
  Copyright Rutuparn Pawar
*/

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

////////////////////////////////////////////////////////////////////////////
typedef struct sll
{
    int data;
    struct sll* next;


}node;

/////////////////////////////////////////////////////////////////////////
node* getNode()
{
	node* n=(node*)malloc(sizeof(node));
	n->next=NULL;
	return n;
}

//////////////////////////////////////////////////////////////////////////
node* SLL()
{
	char ch;
	node *head,*temp,*n;

	head=NULL;
	do
	{
		n=getNode();
		printf("\nEnter Data:");
		scanf("%d",&n->data);
		if(head==NULL)
		{
			head=n;
			temp=n;
		}
		else
		{
			temp->next=n;
			temp=n;
		}
		printf("Do you want to continue?(Y/N):");
		ch=getch();
		printf("%c\n",ch);
	}while(ch=='y' || ch=='Y');
	return head;

}

/////////////////////////////////////////////////////////////////////////
void display(node* head)
{
	node *temp;
	printf("\n\nSingly Linked List:\n");
	if(head!=NULL)
	{
		temp=head;
		while(temp!=NULL)
		{
		  printf(" --> %d",temp->data);
		  temp=temp->next;
		}

	}
	else
	printf("Empty List");

}

////////////////////////////////////////////////////////////////////////
node* insertFront(node* head,int n)
{
	node* temp=getNode();

	temp->data=n;
	temp->next=head;

	head=temp;

	return head;

}

/////////////////////////////////////////////////////////////////////////
node* insertRear(node* head,int n)
{
	node* temp=getNode();
	node* current=head;

	temp->data=n;

	while(current->next!=NULL)
	current=current->next;

	current->next=temp;
	return head;
}

///////////////////////////////////////////////////////////////////////////
node* insert(node* head,int p,int n)
{
	int i=1;
	node* nextNode;
	node* current=head;
	node* temp=getNode();

	temp-> data=n;

	while(i<p)
	{
		current=current->next;
		i++;
	}

	nextNode=current->next;
	temp->next=nextNode;
	current->next=temp;

	return head;
}

///////////////////////////////////////////////////////////////////////////
int getData()
{
	int data;
	printf("\nEnter Data:");
	scanf("%d",&data);
	return data;
}

///////////////////////////////////////////////////////////////////////////
int getPosition()
{
	int pos;
	printf("\nEnter Position:");
	scanf("%d",&pos);
	return pos;
}

////////////////////////////////////////////////////////////////////////
void main()
{
	char ch;
	node* A;
	clrscr();
	while(1)
	{
		printf("\n1 - Create\n");
		printf("2 - Display\n");
		printf("3 - Insert at Beginning\n");
		printf("4 - Insert at End\n");
		printf("5 - Insert at Position\n");
		printf("6 - Exit\n");
		printf("\nEnter Choice:");
		ch=getch();

		printf("%c",ch);

		if(ch=='1')
			A=SLL();
		else if(ch=='2')
			display(A);
		else if(ch=='3')
		       A=insertFront(A,getData());
		else if(ch=='4')
		       A=insertRear(A,getData());
		else if(ch=='5')
		       A=insert(A,getPosition(),getData());
		else if(ch=='6')
			break;
		else
			printf("Enter Valid Choice !");
	}
	getch();
}
/////////////////////////////////////////////////////////////////////////