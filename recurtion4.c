//wap to print a 1 to 20 even numbers using recurtion.
#include<stdio.h>
void main()
{
 static int i=1;
  if(i%2==0)
  {
    printf("%d ",i);
  }
 i++;
 if(i<=20)
 {
    main();
 }


}