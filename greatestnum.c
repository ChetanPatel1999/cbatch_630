//wap to find greatest number bwteen two  number using ternary operator.
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two number :");
	scanf("%d%d",&a,&b);
	a<b ? printf("greatest num = %d",a) : printf("greatest num = %d",b);
}
