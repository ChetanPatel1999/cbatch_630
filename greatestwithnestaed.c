//wap to find greatest num beetween three numbers whithout using logical and operator.
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("enter three value : ");
   scanf("%d%d%d",&a,&b,&c);// 12,334,56
   if(a>b)
   {
      if(a>c)
      {
        printf("greatest num = %d",a);
      }
      else
      {
        printf("greatest num = %d",c);
      }
   }
   else
   {
    if(b>c)
    {
      printf("greatest num = %d",b);  
    }
    else{
        printf("greatest num = %d",c);
    }
   }
  
}