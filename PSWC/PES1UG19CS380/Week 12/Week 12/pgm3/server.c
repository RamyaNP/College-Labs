#include<stdio.h>
#include<stdlib.h>
#include"interface.h"


void sortInfo(Student_t * a, int n)
{Student_t b;
 for (int i = 0; i < n; ++i) 
        {
            for (int j = i + 1; j < n; ++j) 
            {
                if (a[i].marks < a[j].marks) 
                {
                    b = a[i];
                    a[i] = a[j];
                    a[j] = b;
                }
            }
        }
}

void dispArray(Student_t *a, int n)
{
	printf("Rollno.\t\tName\t\tMarks\n");
	for(int i=0; i<n; i++)
	{
		printf("%d\t\t%s\t\t%d\n",a[i].rno,a[i].name,a[i].marks);
	}printf("\n");
}

void readArray(Student_t *b,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter data for Record #%d:\nEnter name:",i+1);
		fflush(stdin);
		scanf("%[^\n]",(b+i)->name);
		printf("Roll no.:");
		fflush(stdin);
		scanf("%d",&(b+i)->rno);
		printf("Marks:");
		scanf("%d",&(b+i)->marks);
		
		printf("\n");
	}
}
