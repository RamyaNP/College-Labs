struct Student
{
	char name[50];
	int rno;
	float phy,maths,ec,pswc,mech,tot,avg;
	
};
 
typedef struct Student Student_t;
int readInfo(Student_t n[], int c);
int DisplayInfo(Student_t n[], int p);

