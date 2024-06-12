//no return type, but with argument
#include<stdio.h>
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("sum = %d\n",c);
}
void cube(int a)
{
    int cube;
    cube=a*a*a;
    printf("%d ",cube);
}
void display(char ch)
{
    printf("char = %c\n",ch);
}
void main()
{
 //add(12,89);//you can pass value direct
 char alpha='A';
 display('G');
 display(alpha);
 int x,y,i;
 x=12;y=5;
 add(x,y);// you can pass variable
 cube(4);
 printf("\n");
 for(i=1;i<=5;i++)
 {
    cube(i);
 }
}