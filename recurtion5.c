//wap to print 2 table using recurtion.
#include<stdio.h>
void main()
{
 static int i=1;
 printf("%d ",i*2);
 i++;
 if(i<=10)
 {
    main();
 }


}