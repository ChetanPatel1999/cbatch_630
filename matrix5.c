#include<stdio.h>
void main()
{
    //   r c
 int mat[3][3],i,j;
 //mat[0][0]=12;
 //mat[0][1]=8;
 printf("enter matrix element : \n");
 for(i=0;i<3;i++)//0
 {
    for(j=0;j<3;j++)
    {
        printf("enter mat elemet pos mat[%d][%d] : ",i+1,j+1);
        scanf("%d",&mat[i][j]);
    }
 }
 printf("matrix element are :-\n");

 for(i=0;i<3;i++)//2
 {
    for(j=0;j<3;j++)//0
    {
        printf("%d ",mat[i][j]);
    }
    printf("\n");
 }
 // sum of all element of matrix
 int sum=0;
  for(i=0;i<3;i++)//1
 {
    for(j=0;j<3;j++)//0
    {
      sum=sum+mat[i][j] ;//18
    }
 }
 printf("sum of matrix element = %d",sum);

}