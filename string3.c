// wap to display only vovels in given string.
#include<stdio.h>
void main()
{
  char name[]="chetan patel";
  //printf("%c",name[2]);
  int i,c=0;
  for(i=0;name[i]!='\0';i++)//12
  {
   if(name[i]=='u' ||name[i]=='o' ||name[i]=='i' ||name[i]=='e' ||name[i]=='a')
   {
    printf("%c\n",name[i]);
    c++;
   }
  }
  printf("total vovel = %d",c);
}