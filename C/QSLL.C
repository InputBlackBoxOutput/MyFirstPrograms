/*
 Program to implement a queue using singly linked list
 Created on 2 April 2019
 Copyright Rutuparn Pawar
*/

#include<stdio.h>
#include<alloc.h>

typrdef struct Queue
{
  int data;
  struct Queue* next;
}node;

node* f=NULL;
node* r=NULL;
///////////////////////////////////////////////////////////////////////////
void Enqueue(int n)
{
  node* newp=(node*)malloc(sizeof(node));
  newp->next=NULL;
  newp->data=n;
  if(r==NULL)
  {
	f=newp;
	r=newp;
  }
  else
  {
	newp->next=f;
	f=newp;
  }
}
///////////////////////////////////////////////////////////////////////////
void Dequeue()
{
	node* temp=f;
	printf("%d Removed",f->data);
	f=f->next;
	free(temp);
}
///////////////////////////////////////////////////////////////////////////
void Display()
{

}
/////////////////////////////////////////////////////////////////////////
int getData()
{
 int n;
 printf("Enter Data:");
 scanf("%d",&n);
 return n;
}

////////////////////////////////////////////////////////////////////////
void main()
{
  int choice;
  clrscr();
  do
  {

    printf("Queue Operations\n");
    printf("1 - Enqueue\n");
    printf("2 - Dequeue\n");
    printf("3 - Display\n");
    printf("4 - Exit\n");
    printf("Enter Choice:");
    scanf("%d",&choice);

	switch(choice)
	{
		case 1:Enqueue(getData());break;
		case 2:Dequeue();break;
		case 3:Display();break;
		case 4:break;
		default:printf("Enter Vaid Choice !");
	}
    }
    while(choice!=4);
}
////////////////////////////////////////////////////////////////////////