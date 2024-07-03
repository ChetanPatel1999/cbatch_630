//string take by user and display them
#include<stdio.h>
void main()
{
 char name[20];
 printf("enter a name :");
 scanf("%s",name);
 printf("name = %s\n",name);
 int i;
 for(i=0;name[i]!='\0';i++)
 {
    printf("%c\n",name[i]);
 }
}