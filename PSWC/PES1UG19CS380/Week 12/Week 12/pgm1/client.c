#include<stdio.h>
#include<stdlib.h>
#include"interface.h"


int main()
{
	int n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	//printf("%d", n);
	printf("enter array elements:\n");
	int *ptr=calloc(n,sizeof(int));
	readArray(ptr, n);
	printf("Array befor permutation\n");
	displayArray(ptr,n);
	printf("\n");
	permuteArray(ptr,n);
	printf("\nThe cyclically permutate the element of an array.\nArray after permutaion:\n");
	displayArray(ptr,n);
	

}
