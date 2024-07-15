//fgets //read from file
//fputs //write into file
#include<stdio.h>
void main()
{
 char ch[]="\nhi i used fputs fuction";
 FILE *ptr;
 ptr=fopen("abc.txt","a");
 fputs(ch,ptr);
 fclose(ptr);
}