#include<stdio.h>
#include"interface.h"

int dateCheck(Date_t n)
{
	if (n.dd>=1 && n.dd<=30 && n.mm>=1 && n.mm<=12)
		return 1;
	else return 0;
}

int datecomp(Date_t n, Date_t m)
{
	if (n.dd==m.dd && n.mm==m.mm && n.yyyy==m.yyyy)	
		return 0;
	else if (n.yyyy!=m.yyyy)
	{	if (n.yyyy>m.yyyy)
			return 1;
		else return 2;
	}
	else if (n.mm!=m.mm)
	{
		if (n.mm>m.mm)
			return 1;
		else return 2;
	}
	else if (n.dd>m.dd)  return 1;
	else return 2;

}