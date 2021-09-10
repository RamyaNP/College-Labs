#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

void readArray(int* a, int n)
{
	for(int i=0; i<n; i++)
	{
		scanf("%d", a+i);
	}

}

void displayArray(int * a, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d\n", *(a+i));
	}
	printf("\n");
}

void permuteArray(int* a, int n)
{
	int p;
	p= *(a+0);
	for(int i=0; i<n-1; i++)
	{ *(a+i)=*(a+i+1);}
	*(a+n-1)=p;

	
}