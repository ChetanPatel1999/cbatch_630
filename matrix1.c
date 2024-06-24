#include<stdio.h>
void main()
{
 int mat[][3]={{2,5,8},{8,3,8},{4,5,9}},i,j;
 printf("matrix element are :-\n");
 for(i=0;i<3;i++)//2
 {
    for(j=0;j<3;j++)//0
    {
        printf("%d ",mat[i][j]);
    }
    printf("\n");
 }




}