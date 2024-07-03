//string take by user and display them
//fgets()//take string from user
//fputs()//display on output screen
#include<stdio.h>
void main()
{
 char name[20];
 printf("enter a name :");
 fgets(name,20,stdin);//take string from user
 //printf("name = %s\n",name);
 printf("name : ");
 fputs(name,stdout);//display on output screen
}