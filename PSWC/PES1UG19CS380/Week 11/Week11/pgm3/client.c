#include<stdio.h>
#include"interface.h"

int main()
{
	Length_t n, m, sum;
	printf("Enter feet and inch for length 1:\n");
	readLen(&n);
	printf("Enter feet and inch for length 2:\n");
	readLen(&m);
	sum=AddLen(&n,&m);
	printf("Sum is %d feet and %f inches", sum.feet, (float)sum.inch);


}	

