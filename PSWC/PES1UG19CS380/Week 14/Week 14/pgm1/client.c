#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

int main()
{
	struct LLIST * toad;
	int n,q, num;
	printf(" Input the number of nodes : ");
	scanf("%d", &n);
	toad=createNodeList(n);
	while(1)
	{
		printf("\n1)Display");
	printf("\n2)Insert at the front\n");
	printf("3) Insert at the end\n");
	printf("4) Sum of alternate node elements\n");
	printf("5) Sum of all the elements in the list\n");
	printf("6) Sum of even and odd node elements in the list\n ");
	printf("7) Exit\n ENTER...\n");

		scanf("%d",&q);
		
		switch(q)
		{
			case 1: printf("DATA IN THE LIST IS:\n");
				displayList(toad);
				break;
			case 2: printf("\n Input data to insert at the beginning of the list : ");
   				scanf("%d", &num);
    				toad=NodeInsertatBegin(num,toad);
				break;
			case 3:printf("\n Input data to insert at the end of the list : ");
    				scanf("%d", &num);
   				toad=NodeInsertatEnd(num,toad);
				break;
			case 4: printf("\n Sum of alternate nodes is= %d",sumAlternateNode(toad));break;
			case 5:printf("\n Sum of all elements: %d", sumNode(toad)); break;
			case 6: printf("\n Sum of even elements: %d\n Sum of odd elements: %d", sumEvenNode(toad), sumOddNode(toad));break;
			case 7: printf("\nExiting now, thank you\n");exit(0);break;
			default: printf("INVALID\n");	

		

		}

	}

}