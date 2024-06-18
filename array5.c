//array in c
#include<stdio.h>
void main()
{
 int n;
 printf("enter array size : ");
 scanf("%d",&n);   
 int a[n];
 int i;
 printf("enter array elemet :-");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("array elemet are : \n");
 for (i=0;i<n;i++)
 {
     printf("%d\n",a[i]);
 } 

 
}