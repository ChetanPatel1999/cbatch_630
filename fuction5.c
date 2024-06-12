#include<stdio.h>
void joke();//declaration
void display()
{
    printf("hi i am display\n");
    joke();
}
void fun()
{
    display();
    printf("hi i am fun\n");
}
void joke()
{
    printf("hi i am joke\n");
}
void main()
{
 fun();
 printf("hi i am main\n");
}