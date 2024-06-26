#include<stdio.h>
void main()
{
 int r,c;
  printf("enter row for matrix : ") ;
  scanf("%d",&r); 
  printf("enter column for matrix : ") ;
  scanf("%d",&c); 
 int mat[r][c],i,j;
 printf("enter matrix element : \n");
 for(i=0;i<r;i++)//0
 {
    for(j=0;j<c;j++)
    {
        printf("enter mat elemet pos mat[%d][%d] : ",i+1,j+1);
        scanf("%d",&mat[i][j]);
    }
 }
 printf("matrix element are :-\n");

 for(i=0;i<r;i++)//2
 {
    for(j=0;j<c;j++)//0
    {
        printf("%d ",mat[i][j]);
    }
    printf("\n");
 }
 // sum of all element of matrix
 int sum=0;
  for(i=0;i<r;i++)//1
 {
    for(j=0;j<c;j++)//0
    {
      sum=sum+mat[i][j] ;//18
    }
 }
 printf("sum of matrix element = %d",sum);

}