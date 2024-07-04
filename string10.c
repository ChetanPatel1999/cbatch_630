//string built in fuctions
//strrev()
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50];
 printf("enter string : ");
 gets(ch);
 printf("string = %s",ch);
 strrev(ch);// reverse the string
 printf("\nreverse string = %s",ch);
}