#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

int main()
{
   int n;
   printf("\nEnter no.of elements: ");
   scanf("%d",&n);
   
   int *a= malloc(sizeof(int)*n);
   printf("\nEnter array elements: \n");
   readArr(a,n);
   printf("\nArray: \n\n");
   dispArr(a,n);
   sqrArr(a,n);
   printf("\n\nArray of squares of elements: \n\n");
   dispArr(a,n);
   printf("\n");
   
   free(a);
   return 0;
}