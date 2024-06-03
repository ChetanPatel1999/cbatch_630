#include<stdio.h>
void main()
{
 int i;
 for(i=1;i<=10;i++)
 {
    printf("%d\n",i);
    if(i==5)
    {
        break;
    }
 }
 printf("after loop");
}