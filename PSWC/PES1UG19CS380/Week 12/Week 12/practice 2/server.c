#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

void readArr(int *a,int n)
{
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
}
void dispArr(int *a,int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d  ",a[i]);
	}
}
void sqrArr(int *a,int n)
{
	for(int i=0; i<n; i++)
	{
		a[i]*=a[i];
	}
}