#include<stdio.h>
#include<stdlib.h>
void main()
{
 int *ptr=(int*)malloc(sizeof(int));
 int *temp=ptr,s=0;
 int n,i;
 while(1)
 {
    printf("enter amount : ");
    scanf("%d",(ptr+s));
    printf("you want to add more ammount press 1 otherwise 0 :");
    scanf("%d",&n);
    if(n==0)
    {
        break;
    }
    s++;//3
    ptr=(int*)realloc(temp,(s+1)*sizeof(int));

 }
 printf("ammount display of workers : ");
 for(i=0;i<(s+1);i++)
 {
    printf("%d\n",*ptr);
    ptr++;
 }
}