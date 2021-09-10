#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

void readEmp(Emp_t *b,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter employee name:");
		fflush(stdin);
		scanf("%[^\n]",(b+i)->name);
		printf("Department:");
		fflush(stdin);
		scanf("%[^\n]",(b+i)->dept);
		printf("Employee id:");
		scanf("%d",&(b+i)->id);
		
		printf("\n");
	}
}

void displayEmp(Emp_t *b,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Employee Details\n----------------------\nName:%s\nDepartment:%s\nEmp Id:%d\n\n",(b+i)->name,(b+i)->dept,(b+i)->id);
	}
	
} 