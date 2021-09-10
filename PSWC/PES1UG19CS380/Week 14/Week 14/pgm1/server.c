#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

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

list_t * NodeInsertatEnd(int num, struct LLIST * stnode)
{
    struct LLIST *fnNode, *tmp;
    fnNode = (struct LLIST*)malloc(sizeof(struct LLIST));
    if(fnNode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        fnNode->data = num;     
        fnNode->nextptr = NULL; 
        tmp = stnode;
        while(tmp->nextptr != NULL)
            tmp = tmp->nextptr;
        tmp->nextptr = fnNode;  
    } return stnode;
}

list_t * NodeInsertatBegin(int num, struct LLIST * stnode)
{
    struct LLIST *fnNode;
    fnNode = (struct LLIST*)malloc(sizeof(struct LLIST));
    if(fnNode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        fnNode->data = num; 
        fnNode->nextptr = stnode; 
        stnode = fnNode; 
    }return stnode;
}

int sumAlternateNode(struct LLIST* head) 
{ 
    int count = 0; 
    int sumalt = 0; 
  
    while (head != NULL) { 
  
        
        if (count % 2 == 0) 
            sumalt += head->data; 
  
        
        count++; 
  
       
        head = head->nextptr; 
    } 
    return sumalt; 
} 

int sumNode(struct LLIST* head) 
{ 
    int count = 0; 
    int sum = 0; 
  
    while (head != NULL) { 
  
        
         
         sum += head->data;        
        head = head->nextptr; 
    } 
    return sum; 
} 

int sumEvenNode(struct LLIST* head) 
{ 
    int count = 0; 
    int sumeve = 0; 
  
    while (head != NULL) { 
  
        
        if (count % 2 == 0) 
            sumeve += head->data; 
  
        
        count++; 
  
       
        head = head->nextptr; 
    } 
    return sumeve; 
} 

int sumOddNode(struct LLIST* head) 
{ 
    int count = 0; 
    int sumodd = 0; 
  
    while (head != NULL) { 
  
        
        if (count % 2 != 0) 
            sumodd += head->data; 
  
        
        count++; 
  
       
        head = head->nextptr; 
    } 
    return sumodd; 
} 