#include"interface.h"
#include<stdio.h>

void readData(Bill_t *b)
{
    printf("Enter the name of the item: \n");
    scanf("%s",b->name);
  printf("Enter the rate: \n");
  scanf("%f",&b->rate);
  printf("Enter the quantity: \n");
  scanf("%d",&b->quantity);
   // printf("Enter the name of the item: \n");
    //scanf("%s",b->name);
    b->price=(b->rate)*(b->quantity);
}

void displayData(Bill_t *b)
{ printf("BILL\n");
  printf("Name: %s\n",b->name);
  printf("rate: %f\n",b->rate);
  printf("no of items is %d\n",b->quantity);
  printf("price for %d items is %f\n",b->quantity,b->price);
}