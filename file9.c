#include<stdio.h>
void main()
{
   FILE *ptr;
   char data[60];
   ptr=fopen("abc.txt","r");
   fgets(data,60,ptr);
   printf("%s",data);
   fclose(ptr);
}