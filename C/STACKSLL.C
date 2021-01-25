/* Program to implement a stack using singly linked list
   Created on 26 March 2019
   Copyright Rutuparn Pawar
*/

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

typedef struct stack
{
  int data;
  struct stack* next;
}node;

node* top;

///////////////////////////////////////////////////////////////////////////
void push(int n)
{
  node* newp=(node*)malloc(sizeof(node));
  newp->next=NULL;
  newp->data=n;

  if(top==NULL)
  top=newp;
  else
  {
	newp->next=top;
	top=newp;
  }
  printf("%d Added\n",n);

}

////////////////////////////////////////////////////////////////
void pop()
{
  node* temp=top;
  if(top==NULL)
  printf("Stack is Empty");
  else
  {
	top=top->next;
	printf("%d Removed\n",temp->data);
  }
  free(temp);
}

//////////////////////////////////////////////////////////////
void display()
{
  node* current=top;
  if(top==NULL)
  printf("Stack is Empty\n");
  else
  {
    printf("Stack:\n");
    while(current->next!=NULL)
    {
	 printf("%d\n",current->data);
	 current=current->next;
    }
    printf("%d\n",current->data);
  }
}

//////////////////////////////////////////////////////////////////////
int getData()
{
  int n;
  printf("Enter Data:");
  scanf("%d",&n);
  return n;
}

///////////////////////////////////////////////////////////////////////
void main()
{
   int choice;
   top=NULL;
   clrscr();
   while(1)
   {
      printf("\nStack Operations\n");
      printf("1 - Push\n2 - Pop\n3 - Display\n4 - Exit\n");
      printf("Enter Choice:");
      scanf("%d",&choice);

      if(choice==1)
      push(getData());
      else if(choice==2)
      pop();
      else if(choice==3)
      display();
      else if(choice==4)
      break;
      else
      printf("Enter Valid Choice");
   }
}
//////////////////////////////////////////////////////////////////