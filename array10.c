//wap to count even and odd eleemt in array.
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
int evencount(int arr[],int size)
{
  int i,count=0;
  for (i=0;i<size;i++)
  {
     if(arr[i]%2==0)
     {
        count++;//
     }
  } 
  return count;
}
int oddcount(int arr[],int size)
{
  int i,count=0;
  for (i=0;i<size;i++)
  {
     if(arr[i]%2==1)
     {
        count++;//
     }
  } 
  return count;
}
void main()
{
 int n;
 printf("enter array1 size : ");
 scanf("%d",&n);   
 int a[n];
 insertarray(a,n);
 arraydisplay(a,n);
 printf("total odd elemet = %d\n",oddcount(a,n));
 printf("total even elemet = %d",evencount(a,n));
}