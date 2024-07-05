//wap to count digit in string.
#include<stdio.h>
#include<string.h>
void main()
{
   char name[50];
   printf("enter a string : ");
   gets(name);//chetan
   int i,c=0;
   printf("digit in given string : ");
   for(i=0;i<strlen(name);i++)
   {
    if(name[i]>='0' && name[i]<='9')
   {
     printf("%c",name[i]);
     c++;
   }
   }
   printf("\ntotal digit count : %d",c);


}