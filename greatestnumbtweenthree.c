#include<stdio.h>
void main()
{
   int a,b,c;
   printf("enter three value : ");
   scanf("%d%d%d",&a,&b,&c);// 12 12 12
   if(a>b && a>c)
   {
    printf("greatest num = %d",a);
   }
   else if(b>c)
   {
      printf("greatest num = %d",b);
   }
   else{
      printf("greatest num = %d",c);
   }
}