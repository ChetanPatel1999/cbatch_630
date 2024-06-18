//array pass in fuction
//wap to take array elemet form user and display them and display sum of all eleement.
#include<stdio.h>
int sumarray(int arr[],int size)//arr=a
{
  int sum=0,i;
  for (i=0;i<size;i++)
 {
    sum=sum+arr[i];
 }
 return sum;
}
void insertarray(int arr[],int size)//arr=a
{
 printf("enter array elemet :-");
 int i;
 for(i=0;i<size;i++)
 {
    scanf("%d",&arr[i]);
 }
}
void arraydisplay(int arr[],int size)
{
  printf("array elemet are : \n");
  int i;
  for (i=0;i<size;i++)
  {
     printf("%d\n",arr[i]);
  } 
}
void main()
{
 int n,m;
 printf("enter array1 size : ");
 scanf("%d",&n);   
 printf("enter array2 size : ");
 scanf("%d",&m); 
 int a[n],b[m];
 insertarray(a,n);
 arraydisplay(a,n);
 printf("sum of array elemet = %d\n",sumarray(a,n));
 insertarray(b,m);
 arraydisplay(b,m);
 printf("sum of array elemet = %d",sumarray(b,m));
}