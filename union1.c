// structure in c
#include<stdio.h>
#include<string.h>
union pen
{
    char name[8];//data member
    int price;//data member
    float rat;//data member
};
void main()
{
 union pen p1,p2,p3;
 printf("size of p1 = %d\n",sizeof(union pen));
 printf("enter p1 info: \n");
 printf("enter pen name : ");
 scanf("%s",p1.name);
 printf("name of p1 : %s\n",p1.name);
 printf("enter price : ");
 scanf("%d",&p1.price);
 printf("price of p1 : %d\n",p1.price);
 printf("enter pen rating : ");
 scanf("%f",&p1.rat);
 printf("rating of p1 : %.2f\n",p1.rat);
 
}