//wap to print length of string.
#include<stdio.h>
void main()
{
   char name[50];
   printf("enter a string : ");
   //gets(name);//chetan
   scanf("%s",name);
   printf("name = %s",name);
   int i,c=0;
   for(i=0;name[i]!='\0';i++)
   {
    c++;
   }
   printf("\nlenth of string = %d",c);

}