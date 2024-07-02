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
  printf("display dynamic array address : ");
    for(i=0;i<n;i++)
  {
    printf("%d ",ptr);
    ptr++;
  }
  ptr=temp;
  int n1,*newptr;
  printf("enter increse size : ");
  scanf("%d",&n1);
  n1=n1+n;
  newptr=(int*)realloc(ptr,n1*sizeof(int));
  printf("display dynamic increse array address : ");
    for(i=0;i<n1;i++)
  {
    printf("%d ",newptr);
    newptr++;
  }
  newptr=temp;
  free(newptr);
 
}