//pre and post increment/decrement concept 
#include<stdio.h>
void main()
{
	int a=12,b;
    //b=a++;//post // frist assing a value in b after that increse a by 1
	b=++a;//pre// frist increase a by 1 than assign in b 
	printf("a = %d\n",a);//13
	printf("b = %d\n",b);//13
	
}
