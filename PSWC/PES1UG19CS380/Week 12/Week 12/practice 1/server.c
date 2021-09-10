#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

void registerCourse(Course_t * c,int p)
{	
	for(int i=0; i<p; i++)
	{
		printf("Enter Course #%d:\n",i+1);
		printf("Code: ");
		scanf("%d",&c[i].code);
		printf("Name: ");
		scanf("%s",c[i].name);
		fflush(stdin); printf("\n");
	}

}

void disp(Course_t *c,int n)
{
	for(int i=0;i<n;i++)
	{
	    printf("\nCourse %d\n",i+1);
		printf("Code: %d",c[i].code);
		printf("\nName: %s\n",c[i].name);
	}
}