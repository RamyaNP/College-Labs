struct Complex
{
	int real,img;
};

typedef struct Complex Complex_t;


void readComplex(Complex_t *c);
Complex_t addComplex(Complex_t * c1, Complex_t * c2);
Complex_t* subtractComplex(Complex_t *c1,Complex_t *c2);
Complex_t* multiplyComplex(Complex_t *c1, Complex_t *c2);
void displayComplex(Complex_t *c);