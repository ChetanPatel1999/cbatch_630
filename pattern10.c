#include<stdio.h>
void main()
{
 int i,j;
 for(i=1;i<=3;i++)//5
 {
    for(j=1;j<=6;j++)//5
    {
        if(i<3)
        {
            printf("1 "); 
        }                 
        else{             
           printf("0 ");  
        }                 
    }
    printf("\n");
 }
 
}
// 1 1 1 1 1 1
// 1 1 1 1 1 1
// 0 0 0 0 0 0
