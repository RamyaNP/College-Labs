#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *fp1,*fp2;
	char fname1[20],fname2[20];
	
	printf("\nEnter file name 1: ");
	scanf("%s",fname1);
	printf("\nEnter file name 2: ");
	scanf("%s",fname2);
	
   fp1 = fopen(fname1, "r");
   fp2 = fopen(fname2, "r");
   if (fp1 == NULL || fp2 == NULL)
   {
      printf("\nCannot open files\n");
      return 0;
   }
   
   char ch1 = getc(fp1);
   char ch2 = getc(fp2);
   
   int error=0, line=0, pos=0;
   
   while (ch1 != EOF && ch2 != EOF)
   {
      pos++;
      if (ch1 == '\n' && ch2 == '\n')
	  {
         line++;
         pos = 0;
      }
	if (ch1 != ch2)
	  {
         error++;
        }
      
      ch1 = getc(fp1);
      ch2 = getc(fp2);
   }
   if(error==0)
	   printf("\nFiles are identical.\n");
   else
	   printf("\n\nFiles are non-identical ");
   fclose(fp1);
   fclose(fp2);
   
   return 0;
}