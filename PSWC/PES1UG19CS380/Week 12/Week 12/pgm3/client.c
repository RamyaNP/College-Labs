#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

int main()
{
	int n;
	printf("Enter the number of Records:");
	scanf("%d",&n);
	Student_t * a=malloc(n*sizeof(Student_t));
	readArray(a,n);
	printf("Befor sorting:\n");
	dispArray(a,n);
	printf("After Sorting:\n");
	sortInfo(a,n);
	dispArray(a,n); 

}