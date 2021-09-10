#include"interface.h"
#include<stdio.h>
void Sort(int a[], int n) {
   int i, j; 
   for (i = 0; i < n-1; i++)     
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (a[j] > a[j+1]) 
             { int temp = a[j]; 
    		a[j] = a[j+1]; 
    		a[j+1] = temp; }
} 

void DispArray(int a[], int n)
{
	for (int i=0; i<n; i++)
		printf("%d\n",*(a+i));	

}