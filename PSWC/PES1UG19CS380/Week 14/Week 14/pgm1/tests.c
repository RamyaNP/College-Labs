#include<stdio.h>
#include<stdlib.h>

typedef struct LLIST
{
	int data;
	struct LLIST * nextptr;
}list_t;

list_t * createNodeList(int n)
{
    struct LLIST *fnNode, *tmp, *stnode;
    int num, i;
    stnode = (struct LLIST *)malloc(sizeof(struct LLIST));

    if(stnode == NULL) 
    {
        printf(" Memory can not be allocated.");
    }
    else
    {


        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->data = num;      
        stnode->nextptr = NULL; 
        tmp = stnode;
        for(i=2; i<=n; i++)
        {
            fnNode = (struct LLIST *)malloc(sizeof(struct LLIST));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                fnNode->data = num;      
                fnNode->nextptr = NULL; 
 
                tmp->nextptr = fnNode; 
                tmp = tmp->nextptr; 
            }
        }
    }return stnode;
}

void displayList(struct LLIST * stnode)
{
    struct LLIST *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->data);       
            tmp = tmp->nextptr;                    
        }
    }
} 

list_t * LastNodeDeletion(list_t * stnode)
{
    list_t *toDelLast, *preNode;
    if(stnode == NULL)
    {
        printf(" There is no element in the list.");
    }
    else
    {
        toDelLast = stnode;
        preNode = stnode;
        
        while(toDelLast->nextptr != NULL)
        {
            preNode = toDelLast;
            toDelLast = toDelLast->nextptr;
        }
        if(toDelLast == stnode)
        {
            stnode = NULL;
        }
        else
        {

            
            preNode->nextptr = NULL;
        }
 
        
        free(toDelLast);
    } return stnode;
}

list_t * FirstNodeDeletion(list_t * stnode)
{
    list_t *toDelptr;
    if(stnode == NULL)
    {
        printf(" There are no node in the list.");
    }
    else
    {
        toDelptr = stnode;
        stnode = stnode->nextptr;
        printf("\n Data of node 1 which is being deleted is :  %d\n", toDelptr->num);
        free(toDelptr);  
    }return stnode;
}

int FindElement(int FindElem, list_t * stnode)
{
	int ctr=1;
	ennode=&stnode;
	while(ennode->nextptr!=NULL)
	{
		if(ennode->num==FindElem)
			break;
		else
			ctr++;
			ennode=ennode->nextptr;
	}
	return ctr;
}
int product(list_t * stnode, int n) 
{ 
    
    list_t * ptr = head; 
  
    int product = 1;
 
    while (ptr != NULL) 
	{ 
        	if (ptr->data % k == 0) 
		{ 
           		 product *= ptr->data;
       		 } 
  
       		 ptr = ptr->nextptr; 
    	} 
  
    return product;
} 

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
	printf("\n2)Delete at the end\n");
	printf("3) Delete at the beginning\n");
	printf("4) Find your element\n");
	printf("5) Product of the nodes of a linked list which are divisible by given number\n ");
	printf("6) Exit\n ENTER...\n");

		scanf("%d",&q);
		
		switch(q)
		{
			case 1: printf("DATA IN THE LIST IS:\n");
				displayList(toad);
				break;
			case 2: printf("\nDeleting data from the end of the list : ");   				
    				toad=LastNodeDeletion(toad);
				break;
			case 3:printf("\n Deleteing data from the beginning of the list : ");    			
   				toad=FirstNodeDeletion(toad);
				break;
			case 4: printf("\n Enter the element you want to find: ");
				scanf("%d",&num);
				if(FindElement(num, toad)) printf("Element Found at %d node", FindElement(num, toad)); 
				break;
			case 5:printf("\n Enter the number you want to be divisor: ");
				scanf("%d",&num);
				printf("product of noded divisible by %d is %d ", num, product(stnode, num)); break;
			case 6: printf("\nExiting now, thank you\n");exit(0);break;
			default: printf("INVALID\n");	

		

		}

	}

}
