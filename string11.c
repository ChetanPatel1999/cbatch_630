//string built in fuctions
//strcpy()
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50],ch1[50];
 printf("enter string : ");
 gets(ch);
 printf("string = %s",ch);
 strcpy(ch1,ch);
 printf("\ncopy string = %s",ch1);
}