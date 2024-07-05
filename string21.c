
//wap to convert uperacse later in lowetrcase later.
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
    if(name[i]>='A' && name[i]<='Z')
    {
        name[i]=name[i]+32;
    }
   }
    printf("\nuper case string : %s",name);
   


}