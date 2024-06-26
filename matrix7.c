//print left digonal elements.
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
 printf("\nleft digonal element : \n");
//   for(i=0;i<r;i++)//3
//  {
//     printf("%d ",mat[i][i]);
//  }
int sum=0;
  for(i=0;i<r;i++)//2
 {
    for(j=0;j<c;j++)//0
    {
      if(i==j)
      {
        printf("%d ",mat[i][j]);
        sum=sum+mat[i][j];
      } 
      else{
        printf("  ");
      } 
    }
    printf("\n");
 }
 printf("sum of left digonal elemet =%d ",sum);
 printf("\nright digonalm of matrix :\n");
 int sum1=0;
//   for(i=0;i<r;i++)//3
//  {
//   printf("%d ",mat[i][(r-1)-i]);
//  }
  for(i=0;i<r;i++)//2
 {
    for(j=0;j<c;j++)//0
    {
      if(i+j==(r-1))//2
      {
        printf("%d ",mat[i][j]);
        sum1=sum1+mat[i][j];
      } 
      else{
        printf("  ");
      } 
    }
    printf("\n");
 }
}
