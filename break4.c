#include<stdio.h>
void main()
{
  int i=1;
  while(i<=10)
  {
    printf("%d ",i);
    if(i==5)
    {
        break;
    }
    i++;
  }
}