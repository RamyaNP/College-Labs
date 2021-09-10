#include<stdio.h>
#include"interface.h"

int main()
{
	Complex_t c1,c2, summ,* diff,* prod;
	printf("Complex Number 1:\n");
	readComplex(&c1);
	printf("\nComplex Number 2:\n");
	readComplex(&c2);
	summ=addComplex(&c1,&c2);
	printf("The sum is :");
	displayComplex(&summ);
	diff=subtractComplex(&c1,&c2);
	printf("\nThe difference is: ");
	displayComplex(diff);
	prod=multiplyComplex(&c1,&c2);
	printf("\nThe product is: ");
	displayComplex(prod);
	printf("\n");
	 
}