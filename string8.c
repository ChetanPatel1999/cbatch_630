//string built in fuctions
//strlen()
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50];
 printf("enter string : ");
 gets(ch);
 printf("string = %s",ch);
 int n;
 n=strlen(ch);
 printf("\nlength of string : %d",n);
}