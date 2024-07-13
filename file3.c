//store contact information
#include<stdio.h>
void main()
{
  char name[30];
  char cont[12];
  printf("enter name of student : ");
  gets(name);
  printf("enter mo. no. of student : ");
  gets(cont);
  FILE *pf;
  pf=fopen("acontact.txt","a");
  fprintf(pf,"%s : %s\n",name,cont);
  fclose(pf);


}