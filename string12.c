//string built in fuctions
//strcat()
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50],ch1[50];
 printf("enter string1 : ");
 gets(ch);
 printf("enter string2 : ");
 gets(ch1);
 printf("string1 = %s\n",ch);
 printf("string2 = %s\n",ch1);
 strcat(ch," ");
 strcat(ch,ch1);//its combine two string
 printf("combine string =%s",ch);

}