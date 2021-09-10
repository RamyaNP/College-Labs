typedef struct Student
{
	int rno,marks;
	char name[50];
} Student_t;

void readArray(Student_t *b,int n);
void dispArray(Student_t *a, int n);
void sortInfo(Student_t * a, int n);