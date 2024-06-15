//recursion :- when a fuction call it self is called recursion.
#include<stdio.h>
int i=1;
void fun()
{
  //static int  i=1;
  printf("hi i am fun\n");
  i++;
  if(i<=5)
  {
    fun();//recursive calling
  }

}
void main()
{
   fun();// simple calling
}