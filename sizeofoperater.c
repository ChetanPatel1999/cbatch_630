// we can check size of data type in byte using size of operator
#include<stdio.h>
void main()
{
	char ch;
	int a;
	float b;
	double d;
	short int g;
	long long int ll;
	printf("size of char : %d\n",sizeof(ch));
	printf("size of int : %d\n",sizeof(a));
	printf("size of flaot : %d\n",sizeof(b));
	printf("size of float : %d\n",sizeof(float));
	printf("size of double: %d\n",sizeof(d));
	printf("size of short int : %d\n",sizeof(g));
	printf("size of long long int : %d\n",sizeof(ll));
}
