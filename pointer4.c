//all pointer type variable memory allcation is same (same bytes). 
#include<stdio.h>
void main()
{
 int *ptr;
 char *ch;
 double *d;
 printf("%d %d %d",sizeof(ptr),sizeof(ch),sizeof(d));

}