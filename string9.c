//string built in fuctions
//strupr()
//strlwr()
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50];
 printf("enter string : ");
 gets(ch);
 printf("string = %s",ch);
 strupr(ch);// convert lowercase into upercase
 printf("\nuper case string = %s",ch);
 strlwr(ch);//its convert lover case
 printf("\nlower case string = %s",ch);


}