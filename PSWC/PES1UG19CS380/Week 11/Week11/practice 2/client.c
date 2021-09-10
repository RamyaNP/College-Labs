#include<stdio.h>
#include"interface.h"


int main()
{
    Bill_t b;
    Bill_t *gB=&b;
    int n;
    float total=0.0;
    printf("Enter the number of items:\n");
    scanf("%d",&n);
    printf("Enter the details of the bill\n");
    for(int i=1;i<=n;i++)
    {
        readData(gB);
        displayData(gB);
        total+=b.price;
        printf("\n");
    }
    
    printf("total amount to be paid is %f",total);
  }
   