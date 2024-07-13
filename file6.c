//fgetc()//read one char from file
//fputc()//write one char into file
#include<stdio.h>
void main()
{
 FILE *pf;
 char ch='A';
 pf=fopen("abc.txt","w");
 fputc(ch,pf);
 fclose(pf);
}