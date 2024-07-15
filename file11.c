#include<stdio.h>
#include<string.h>
void main()
{
   FILE *ptr;
   char data[60];
   int c=0;
   ptr=fopen("abc.txt","r");
    while(fscanf(ptr,"%s",data)!=EOF)
    {
      printf("%s ",data);
      if(strcmp(data,"indore")==0)
      {
        c++;
      }
    }
    printf("\ncount = %d",c);
   fclose(ptr);
}