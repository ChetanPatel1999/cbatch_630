
//wap to to count word in given string.
#include<stdio.h>
#include<string.h>
void main()
{
   char name[50];
   printf("enter a string : ");
   gets(name);//hi i am chetan patel
   int i,c=0;
   printf("string : %s",name);
   for(i=0;i<strlen(name);i++)
   {
     if(name[i]==' ')
     {
        c++;
     }
   }
    printf("\ntotal words : %d",c+1);
   


}