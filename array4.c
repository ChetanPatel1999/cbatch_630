//array in c
#include<stdio.h>
void main()
{
 int a[5];//array diclaration
 int i;
 //a[0]=12;
 //a[1]=78;
 printf("enter array elemet :-");
 for(i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("array elemet are : \n");
 for (i=0;i<5;i++)
 {
     printf("%d\n",a[i]);
 } 

 
}