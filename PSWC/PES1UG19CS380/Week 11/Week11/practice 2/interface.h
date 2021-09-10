struct Bill
{
  char name[20];
  float rate;
  int quantity;
  float price;
};
typedef struct Bill Bill_t;
void readData(struct Bill *);
void displayData(struct Bill *);