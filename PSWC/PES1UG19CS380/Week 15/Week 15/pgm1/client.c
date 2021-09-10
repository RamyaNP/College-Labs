#include"interface.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
	int n;
	printf("Enter size of array : ");
	scanf("%d", &n);

	int *a = malloc(sizeof(int) *n);
	printf("Enter elements of array : \n");
	for (int i=0; i<n; i++)
		scanf("%d", a+i);
	printf("\n\nBefore Sorting:\n");
	DispArray(a,n);

	Sort(a, n);

	printf("After Sorting : \n");
	DispArray(a,n);
	
}