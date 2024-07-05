//wap to print to print only vovels in given string.
#include<stdio.h>
#include<string.h>
void main()
{
   char name[50];
   printf("enter a string : ");
   gets(name);//chetan
   int i,c=0;
   printf("vovles in given string : ");
   for(i=0;i<strlen(name);i++)
   {
    if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
   {
     printf("%c",name[i]);
     c++;
   }
   }
   printf("\ntotal vovels count : %d",c);


}