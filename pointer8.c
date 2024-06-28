//print reverse array element using pointer.
#include<stdio.h>
void main()
{
  int arr[5],i;
  int *ptr;
  ptr=&arr[0];
  printf("enter array element : \n");
  for(i=0;i<5;i++)//2
  {
    scanf("%d",ptr);
    ptr++;
  }
  ptr--;
  //ptr=&arr[4];
  printf("display array element : ");
    for(i=0;i<5;i++)
  {
    printf("%d ",*ptr);
    ptr--;
  }
 
}