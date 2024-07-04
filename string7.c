//string take by user and display them
//fgets()//take string from user
//fputs()//display on output screen
#include<stdio.h>
void main()
{
 char name[5];
 printf("enter a name :");
 fgets(name,5,stdin);//take string from user
 //printf("name = %s\n",name);
 printf("name : ");
 fputs(name,stdout);//display on output screen
}