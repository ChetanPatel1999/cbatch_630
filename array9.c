//find max element in given array.
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
int maxelemet(int arr[],int size)
{
    // 0   1   2   3   4   5
    // 12  45  3  567  89  15
  int i,max=arr[0];//567
  for (i=0;i<size;i++)//6
  {
    if(max<arr[i])
    {
        max=arr[i];
    }
  } 
  return max;
  
}
int minelemet(int arr[],int size)
{
    // 0   1   2   3   4   5
    // 12  45  3  567  89  15
  int i,min=arr[0];//567
  for (i=0;i<size;i++)//6
  {
    if(min>arr[i])
    {
        min=arr[i];
    }
  } 
  return min;
  
}
void main()
{
 int n;
 printf("enter array1 size : ");
 scanf("%d",&n);   
 int a[n];
 insertarray(a,n);
 arraydisplay(a,n);
 printf("max elemet = %d\n",maxelemet(a,n));
 printf("min elemet = %d",minelemet(a,n));

}