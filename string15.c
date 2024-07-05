//wap to print length of string.
#include<stdio.h>
int len(char ch[])
{
   int i,c=0;
   for(i=0;ch[i]!='\0';i++)
   {
    c++;
   }
   return c;
}
void main()
{
   char name[50];
   printf("enter a string : ");
   gets(name);//chetan
   printf("name = %s",name);
   printf("\nlenth of string = %d",len(name));
}