typedef struct LLIST
{
	int data;
	struct LLIST * nextptr;
}list_t;
list_t * createNodeList(int n);
void displayList(struct LLIST * stnode);
list_t * NodeInsertatEnd(int num, struct LLIST * stnode);
list_t * NodeInsertatBegin(int num, struct LLIST * stnode);
int sumAlternateNode(struct LLIST* head) ;
int sumNode(struct LLIST* head);
int sumEvenNode(struct LLIST* head);

int sumOddNode(struct LLIST* head) ;
 
