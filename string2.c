// accces string charcter one by one using for loop
#include<stdio.h>
void main()
{
  char name[]="chetan";
  //printf("%c",name[2]);
  int i;
  for(i=0;name[i]!='\0';i++)//12
  {
    printf("%c\n",name[i]);
  }
}