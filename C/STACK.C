/* Program to implement stack using array
   Created on 26 March 2019
   Copyright Rutuparn Pawar
*/

#include <stdio.h>
#define size 5

typedef struct
{
  int top;
  int data[size];
}stack;

stack s;

/////////////////////////////////////////////////////////////////
void push(int n)
{
  if(s.top==size-1)
  printf("Stack is Full\n");
  else
  {
  s.data[++s.top]=n;
  printf("%d Added\n",n);
  }
}
////////////////////////////////////////////////////////////////

void pop()
{
  if(s.top==-1)
  printf("Stack is Empty\n");
  else
  {
	printf("%d Removed\n",s.data[s.top]);
	s.top--;
  }
}

//////////////////////////////////////////////////////////////
void display()
{
  int i;
  if(s.top==-1)
  printf("Stack is Empty\n");
  else
  {
    printf("Stack:\n");
    for(i=s.top;i>-1;i--)
    {
	printf("%d\n",s.data[i]);
    }
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
   s.top=-1;
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