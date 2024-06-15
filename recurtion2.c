//wap to print a msg 5 times using recurtion.
#include<stdio.h>
//int i=1; // global variable
void main()
{
 static int i=1;// its execute one time in program 
 printf("hi i am main\n");
 i++;
 if(i<=5)
 {
    main();
 }


}