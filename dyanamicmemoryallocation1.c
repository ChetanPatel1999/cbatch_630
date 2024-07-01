//pointer to array
#include<stdio.h>
#include<stdlib.h>
//malloc// its allocat dynamic memory
//calloc
//realloc
//free
void main()
{
  int *ptr,*temp,i,n;
  printf("enter dynamic array size : ");
  scanf("%d",&n);
  ptr=(int*)malloc(n*sizeof(int));
  temp=ptr;
  printf("enter array element : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",ptr);
    ptr++;
  }
  ptr=temp;
  int sum=0;
  printf("display array element : ");
    for(i=0;i<n;i++)
  {
    printf("%d ",*ptr);
    sum=sum+*ptr;
    ptr++;
  }
  printf("\nsum of array elemet = %d",sum);
  ptr=temp;
  free(ptr);
 
}