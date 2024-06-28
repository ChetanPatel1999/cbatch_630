//pointer to array
#include<stdio.h>
void main()
{
  int arr[5],i;
  int *ptr;
  ptr=&arr[0];
  printf("enter array element : \n");
  for(i=0;i<5;i++)
  {
    scanf("%d",ptr);
    ptr++;
  }
  ptr=arr;//&arr[0]
  printf("display array element : ");
    for(i=0;i<5;i++)
  {
    printf("%d ",*ptr);
    ptr++;
  }
 
}