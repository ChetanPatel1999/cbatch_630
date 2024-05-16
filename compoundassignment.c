//relational operator
#include<stdio.h>
void main()
{
	int a,b,ans;
	a=5;
	b=2;
    //a+=b;
	//a=a+b;
	//a*=b;
    //b*=b;
    //b%=a;
    b/=a+=a*=b+=2;
	printf("a = %d\n",a);//40
	printf("b = %d\n",b);//44
   
	
}
