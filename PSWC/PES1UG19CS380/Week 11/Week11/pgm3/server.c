#include<stdio.h>
#include"interface.h"

void readLen(Length_t *n)
{
	printf("Enter feet:");
	scanf("%d",&n->feet);
	printf("Enter inch:");
	scanf("%d",&n->inch);
}

Length_t AddLen(Length_t * n, Length_t * m)
{
	Length_t sum;
	sum.feet=(*n).feet+m->feet;
	int a=(*n).inch+m->inch;
	sum.inch=a;
	if (a>=12) {int b=a/12; int c=a%12; sum.feet+=b; sum.inch=c;}
	return sum;
}