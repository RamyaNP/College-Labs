#include<stdio.h>
#include"interface.h"

void readComplex(Complex_t *c)
{
	printf("Enter the real part:");
	scanf("%d",&c->real);
	printf("Enter the imaginary part:");
	scanf("%d",&c->img);
}

Complex_t addComplex(Complex_t * c1, Complex_t * c2)
{
	Complex_t sum;
	sum.real=c1->real+c2->real;
	sum.img=c1->img+c1->img;
	return sum;
}

Complex_t* subtractComplex(Complex_t *c1,Complex_t *c2)
{
	static Complex_t diff;

	diff.real=c1->real-c2->real;
	diff.img=c1->img-c2->img;
	
	return &diff;
}

Complex_t* multiplyComplex(Complex_t *c1, Complex_t *c2)
{
	static Complex_t mult;
	mult.real=(c1->real*c2->real)-(c1->img*c2->img);
	mult.img=(c1->real*c2->img)+(c1->img*c2->real);
	print
	
	return &mult;
}
void displayComplex(Complex_t *c)
{
	if(c->img >= 0)
		printf("%d+%di\n",c->real,c->img);
	else
		printf("%d%di\n",c->real,c->img);
}
	