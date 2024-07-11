// structure in c
#include<stdio.h>
#include<string.h>
struct pen_of_india
{
    char name[20];
    int price;
    float rat;
};
typedef struct pen_of_india poi;
void main()
{
 poi p1,p2={"reynolds",10,4.5},p3;
 strcpy(p1.name,"cello");
 p1.price=5;
 p1.rat=3.5;
 printf("p1 info : \n");
 printf("name of p1 : %s\n",p1.name);
 printf("price of p1 : %d\n",p1.price);
 printf("rating of p1 : %.2f\n",p1.rat);
 printf("p2 info : \n");
 printf("name of p2 : %s\n",p2.name);
 printf("price of p2 : %d\n",p2.price);
 printf("rating of p2 : %.2f\n",p2.rat);
}