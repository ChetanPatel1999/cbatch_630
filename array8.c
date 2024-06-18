//array pass in fuction
//wap to take array elemet form user and display them and display sum of all eleement.
#include<stdio.h>
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
void reversearray(int arr[],int size)
{
  printf("raevrse array elemet are : \n");
  int i;
  for (i=size-1;i>=0;i--)
  {
     printf("%d\n",arr[i]);
  }   
}
void main()
{
 int n;
 printf("enter array1 size : ");
 scanf("%d",&n);   
 int a[n];
 insertarray(a,n);
 arraydisplay(a,n);
 reversearray(a,n);
}