#include<stdio.h>
#include"interface.h"

int main()
{
	
	Date_t n,m;
	int res;
	again:
	printf("Enter date 1 in the format dd/mm/yyyy:\n");
	scanf("%d/%d/%d",&n.dd,&n.mm,&n.yyyy);
	printf("Enter date 2 in the format dd/mm/yyyy:\n");
	scanf("%d/%d/%d",&m.dd,&m.mm,&m.yyyy);
	if (dateCheck(n) && dateCheck(m))
		res=datecomp(n,m);
	else  
	{
	printf("Invalid Date");
	
	/*the date checking function is coded with the assumption that all months have 30 days and all the concept of leap year doesnt exist*/
		
	goto again;
	}
	
	switch(res)
	{
		case 0:
			printf("The dates are equal"); break;
		case 1:
			printf("Date 1 is the greater of the two"); break;
		case 2:
			printf("Date 2 is the greater of the two"); break;
	}

	
}