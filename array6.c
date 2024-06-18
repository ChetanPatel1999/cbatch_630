//wap to take array elemet form user and display them and display sum of all eleement.
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
 // sum of array element
 int sum=0;
  for (i=0;i<n;i++)
 {
    sum=sum+a[i];
 }
 printf("sum of array element = %d ",sum);
 
}