#include<stdio.h>
#include"interface.h"

int main()
{
	int n;
	printf("Enter the number of students:\n");
	scanf("%d",&n);
	fflush(stdin);
	Student_t s[n];
	readInfo(s, n);
	printf("\n\n");
	printf("STUDENT DETAILS\n-----------------------\n");
	DisplayInfo(s,n);
	
	  
}
	 