#include<stdio.h>
void main()
{
  int i,j,k;
  for(i=1;i<=4;i++)//4
  {
    for (k=4;k>i;k--)
    {
        printf("  ");
    }
    for (j=1;j<i*2;j++)
    {
        printf("* ");
    }
    printf("\n");
  }
}