//read file in c
#include<stdio.h>
void main()
{
FILE *pf;
char ch[30];
pf=fopen("abc.txt","r");
while(fscanf(pf,"%s",ch)!=EOF)
{
 printf("%s ",ch);
}
fclose(pf);

}