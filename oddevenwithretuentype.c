#include<stdio.h>
int even_odd(int num)
{
   
    if(num%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void main()
{
    int n;
    printf("enter a num :");
    scanf("%d",&n);
    if(even_odd(n))
    {
        printf("even");
    }
    else{
        printf("odd");
    }
}