#include<stdio.h>
void main()
{
  int i=1,n=30,c=0;
  while(i<=n)
  {
    if(n%i==0)
    {
        printf("%d ",i);
        c++;
        if(c==3)
        {
          break;
        }
    }
  
    i++;
  }
}