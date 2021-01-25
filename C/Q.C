/*
 Program to implement a queue using array
 Created on 2 April 2019
 Copyright Rutuparn Pawar
*/

#include<stdio.h>
#include<conio.h>
#define Size 5

struct Queue
{
 int a[Size];
 int f;
 int r;
}Q;

///////////////////////////////////////////////////////////////////////////
void Enqueue(int n)
{
 if(Q.r==Size-1)
	printf("Queue if Full");
 else
 {
	if(Q.f==-1) Q.f=0;
	Q.a[++Q.r]=n;
	printf("%d Added\n",n);
 }
}

///////////////////////////////////////////////////////////////////////////
void Dequeue()
{
 if(Q.f==Q.r)
	printf("Queue is empty \n");
 else
 {
	printf("%d Removed\n",Q.a[Q.f]);
	Q.f++;
	if(Q.f==Q.r)
	{
	 Q.f=-1;Q.f=-1;
	}
 }
}

///////////////////////////////////////////////////////////////////////////
void Display()
{
	int i;
	if(Q.f==Q.r)
	printf("Queue is empty");
	else
	{
		printf("Queue:\n");
		for(i=Q.r;i>=Q.f;i--)
			printf("-->%d",Q.a[i]);
		printf("\n");
	}
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
  Q.f=-1;
  Q.r=-1;
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