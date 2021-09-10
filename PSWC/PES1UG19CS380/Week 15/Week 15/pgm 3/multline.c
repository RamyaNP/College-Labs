#include <stdio.h>
#include <stdlib.h>

int main() {
	char fn[20];
	int n;
	printf("Enter File : ");
	scanf("%s", fn);

	printf("Enter number of lines : ");
	scanf("%d", &n);
  
   	 
   	FILE *f = fopen(fn, "w"); 
   	char c; 
  
   	if (f == NULL) { 
		puts("Could not open files"); 
		return 0; 
	} 
  
	printf("Enter File Contents : \n");
	int count = 0;
	while ((c = getchar()) != EOF && count<n) { 
		if (c=='\n')
			count++;
		fputc(c, f); 
	}
  
   	fclose(f); 
	printf("Done\n"); 
	
	return 0;
}