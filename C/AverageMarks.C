/*
Program using structures to store 5 subject marks of five students and display avg
Created on 12 Feb 2019
Copyright Rutuparn Pawar
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////
typedef struct
{
	char name[20];
	int marks[5];

}s;

///////////////////////////////////////////////////////////////////////////
void main()
{
	int i,j,sum=0;
	s student[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter name %d:",i+1);
		scanf("%s",student[i].name);
		printf("Enter marks  student %d:",i+1);
		for(j=0;j<5;j++)
		{
			printf("\nEnter marks subject %d:",j+1);
			scanf("%d",&student[i].marks[j]);
		}
	}

	for(i=0;i<5;i++)
	{
		printf("%s\n",student[i].name);
		for(j=0;j<5;j++)
			printf("%d\n",student[i].marks[j]);
	}

	for(i=0;i<5;i++)
	{
		printf("\nAvg marks of student %d :",i+1);
		for(j=0;j<5;j++)
			sum+=student[i].marks[j];
		printf("%d",sum/5);sum=0;
	}
	getch();
}
///////////////////////////////////////////////////////////////////////////