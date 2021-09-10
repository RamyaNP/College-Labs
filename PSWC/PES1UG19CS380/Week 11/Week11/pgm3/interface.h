struct Length
{ int feet, inch; };
typedef struct Length Length_t;
void readLen(Length_t *n);
Length_t AddLen(Length_t * n, Length_t * m);
