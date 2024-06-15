//wap to print a 1 to 10 numbers using recurtion.
#include<stdio.h>
void main()
{
 static int i=1;
 printf("%d\n",i);
 i++;
 if(i<=10)
 {
    main();
 }


}