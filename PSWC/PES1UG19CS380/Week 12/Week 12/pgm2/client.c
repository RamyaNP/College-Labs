#include<stdio.h>
#include<stdlib.h>
#include"interface.h"


int main()
{
	int n;
	printf("Enter the number of employees:");
	scanf("%d",&n);
	Emp_t *a=malloc(n*sizeof(Emp_t));
	printf("Enter Employer details:\n");
	readEmp(a,n);
	printf("**********************\n");
	printf("        Details       \n");
	printf("**********************\n");
	displayEmp(a,n);
	printf("\n");
}