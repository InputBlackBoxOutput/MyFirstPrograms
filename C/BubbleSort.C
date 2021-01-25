/*
 Program to perform bubble sort on an array
 Created on 29 Jan 2019
 Copyright Rutuparn Pawar
*/

#include <stdio.h>
#include <conio.h>

///////////////////////////////////////////////////////////////////////////
void print_array(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
}

///////////////////////////////////////////////////////////////////////////
void main()
{
	int a[50];
	int i,j,temp,size;

	clrscr();
	printf("Enter array size:");
	scanf("%d",&size);

	printf("Enter %d numbers :",size);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	printf("Original Array : \n");
	print_array(a,size);

	for(i=size-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf(" \nBubble sorted array : \n");
	print_array(a,size);

	getch();

}

///////////////////////////////////////////////////////////////////////////