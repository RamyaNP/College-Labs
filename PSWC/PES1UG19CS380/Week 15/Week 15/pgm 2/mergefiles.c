#include <stdio.h>
#include <stdlib.h>

int main() {
	char f1[20], f2[20];
	printf("Enter File 1 : \n");
	scanf("%s", f1);
	printf("Enter File 2 : \n");
	scanf("%s", f2);
   	FILE *fp1 = fopen(f1, "r"); 
   	FILE *fp2 = fopen(f2, "r"); 
  
   	FILE *fp3 = fopen("file3.txt", "w"); 
   	char c; 
  
   	if (fp1 == NULL || fp2 == NULL || fp3 == NULL) { 
		puts("Could not open files"); 
		exit(0); 
	} 
  
	fprintf(fp3,"Contents of file %s\n",f1);
	while ((c = fgetc(fp1)) != EOF) 
		fputc(c, fp3); 
		fputc('\n',fp3);
fprintf(fp3,"Contents of file %s\n",f2);
	while ((c = fgetc(fp2)) != EOF) 
		fputc(c, fp3);
		
  	
  
	printf("Merged File 1 and File 2 into file3.txt\n"); 
   	fclose(fp1); 
   	fclose(fp2); 
   	fclose(fp3); 
	return 0;
}