#include<stdio.h>
#include<stdlib.h>
#include"interface.h"

int main()
{
	int n=6;
	Course_t *c=malloc(sizeof(Course_t)*n);
	printf("\nEnter details for all %d courses:\n",n);
	registerCourse(c,n);
	printf("\nEnter no.of courses you wish to take: ");
	scanf("%d",&n);
	c=realloc(c,sizeof(Course_t)*n);
	registerCourse(c,n);
	printf("\nCOURSE DETAILS (after dropping of courses)\n");
	disp(c,n);

	free(c);
	return 0;
}
