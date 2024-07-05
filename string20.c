
//wap to lowercase later in upercase later.
#include<stdio.h>
#include<string.h>
void main()
{
   char name[50];
   printf("enter a string : ");
   gets(name);//ahetan
   int i;
   printf("string : %s",name);
   for(i=0;i<strlen(name);i++)
   {
    if(name[i]>='a' && name[i]<='z')
    {
        name[i]=name[i]-32;
    }
   }
    printf("\nuper case string : %s",name);
   


}