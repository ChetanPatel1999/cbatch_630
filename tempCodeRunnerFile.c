//fgetc()//read one char from file
//fputc()//write one char into file
#include<stdio.h>
void main()
{
 FILE *pf;
 char ch;
 pf=fopen("file5.c","r");
 while(1)
 {
    ch=fgetc(pf);
    if(ch==EOF)
    {
        break;
    }
    printf("%c",ch);
 }
 fclose(pf);


}