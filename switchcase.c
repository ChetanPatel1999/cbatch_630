#include<stdio.h>
void main()
{
 char ch;
 printf("enter state short name : ");
 scanf("%c",&ch);
 switch(ch)
 {
    case 'm':printf("madhya pradesh");break;
    case 'u':printf("utrakhand");break;
    case 'r':printf("rajsthan");break;
    case 'g':printf("gujrat");break;
    default : printf("enter right short name");
 }
}