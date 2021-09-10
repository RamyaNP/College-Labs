#include<stdio.h>
#include"interface.h"

int readInfo(Student_t n[], int p)
{
	for(int i=0; i<p; i++)
	{
		printf("For Student %d:\n\n", i+1);
		printf("Enter student name:");
		fflush(stdin);
		scanf("%[^\n]", n[i].name);
		printf("\nEnter roll no.:");
		scanf("%d",&n[i].rno);
		printf("\nEnter marks in:");
		printf("\n physics:");
		scanf("%f", &n[i].phy);
		printf("\n maths:");
		scanf("%f", &n[i].maths);
		printf("\n electronics:");
		scanf("%f", &n[i].ec);
		printf("\n problem solving with c:");
		scanf("%f", &n[i].pswc);
		printf("\n mechanical:");
		scanf("%f", &n[i].mech);
		n[i].tot=n[i].phy+n[i].maths+n[i].ec+n[i].pswc+n[i].mech;
		n[i].avg=n[i].tot/5;
	}
}

int DisplayInfo(Student_t n[], int p)
{
	for(int i=0;i<p;i++)
	{
		printf("Student No.: %d\n",n[i].rno);
		printf("Student Name: %s\n",n[i].name);
		printf("Marks in Physics: %.2f\n",n[i].phy);
		printf("Marks in Maths: %.2f\n",n[i].maths);
		printf("Marks in Electronics: %.2f\n",n[i].ec);
		printf("Marks in problem solving with c: %.2f\n",n[i].pswc);
		printf("Marks in Mechanics: %.2f\n",n[i].mech);
		printf("Total Marks: %.2f\n",n[i].tot);
		printf("Average Marks: %.2f\n",n[i].avg);
		if (n[i].avg>=40) printf("Result: Pass\n");
		else printf("Result: Fail\n");
		if (n[i].avg>=85) printf("Division: First Class with Distinction\n");
		else if (n[i].avg>=60) printf("Division: First Class\n");
		else if (n[i].avg>=50) printf("Division: Second Class\n");
		else if (n[i].avg>=40) printf("Division: Third Class\n");
		else printf("Division: F Grade\n");
		printf("\n");
			  
	}

}
