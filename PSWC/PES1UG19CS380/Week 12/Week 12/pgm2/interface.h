typedef struct Employee
{
	char name[50], dept[20];
	int id;
} Emp_t;

void readEmp(Emp_t *b,int n);
void displayEmp(Emp_t *b,int n);