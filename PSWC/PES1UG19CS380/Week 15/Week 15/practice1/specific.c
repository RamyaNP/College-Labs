#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

int main()
{
    
    FILE * fp1,* fp2;
    char fname[100],str[MAX],newStr[MAX],c1,c2;
    int lineNo, count=0;

   	printf("\nEnter filename: ");
    scanf("%s", fname);
	
	fp1  = fopen(fname, "r");
	
    if (fp1 == NULL)
    {
        printf("\nCannot open file.\n");
        exit(0);
    }
	else
	{  
	   printf("\nContents of the file: \n\n");
	   c1 = getc(fp1);
       while (c1 != EOF) 
	   {
        printf("%c", c1);
        c1 = getc(fp1);
       }
	}
	
    printf("\n\nEnter line number to replace: ");
    scanf("%d", &lineNo);
    fflush(stdin);
    printf("\nEnter new text: ");
    fgets(newStr,MAX, stdin);
	//printf("%s",newStr);
	fp2 = fopen("temp.txt", "w"); 
	rewind(fp1);
    while (!feof(fp1))
    {	//printf("in the while look");
		strcpy(str,"\0");
		fgets(str,MAX,fp1);
	printf("%s",str);
		if(!feof(fp2))
		{
			count++;
			//write new text to temporary file if line number matches
			if (count == lineNo)
				fputs(newStr,fp2);
				
			//write old text
			else
				fputs(str,fp2);
		}
    }

    fclose(fp1);
    fclose(fp2);
	
    //delete original file
    remove(fname);
    //rename temporary file
    rename("temp.txt", fname);
	
    printf("\nFile contents after successful replacement:\n\n");
	fp2 = fopen(fname, "r");
      
    c2 = getc(fp2);
    while (c2 != EOF)
	{
        printf("%c", c2);
        c2 = getc(fp2);
    }
	printf("\n");
    fclose(fp2);

    return 0;
}