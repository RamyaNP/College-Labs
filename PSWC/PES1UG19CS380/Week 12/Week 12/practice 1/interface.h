typedef struct Courses
{
	int code;
	char name[20];
}Course_t;

void registerCourse(Course_t * c,int p);
void disp(Course_t *c,int n);
