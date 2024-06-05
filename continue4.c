//print infinite times 1 
#include<stdio.h>
void main()
{
  int i=1;
  while(i<=10)
  {
    
    if(i==5)
    {
         i++;
        continue;
    }
    printf("%d ",i);//2 3 4 6  7 8 9   10 11
  
  }
}