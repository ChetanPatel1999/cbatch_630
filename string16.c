//wap to print reverse string.
#include<stdio.h>
#include<string.h>
void main()
{
   char name[50];
   printf("enter a string : ");
   gets(name);//chetan
   int i;
   printf("reverse string : ");
   for(i=(strlen(name)-1);i>=0;i--)
   {
    printf("%c",name[i]);//natehc
   }


}