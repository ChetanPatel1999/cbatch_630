// structure in c
#include<stdio.h>
#include<string.h>
struct pen
{
    char name[20];
    int price;
    float rat;
};
void main()
{
 struct pen p1,p2,p3;
 printf("size of p1 = %d\n",sizeof(struct pen));
 printf("enter p1 info: \n");
 printf("enter pen name : ");
 scanf("%s",p1.name);
 printf("enter price : ");
 scanf("%d",&p1.price);
 printf("enter pen rating : ");
 scanf("%f",&p1.rat);
 printf("enter p2 info: \n");
 printf("enter pen name : ");
 scanf("%s",p2.name);
 printf("enter price : ");
 scanf("%d",&p2.price);
 printf("enter pen rating : ");
 scanf("%f",&p2.rat);

 printf("p1 info : \n");
 printf("name of p1 : %s\n",p1.name);
 printf("price of p1 : %d\n",p1.price);
 printf("rating of p1 : %.2f\n",p1.rat);
 printf("p2 info : \n");
 printf("name of p2 : %s\n",p2.name);
 printf("price of p2 : %d\n",p2.price);
 printf("rating of p2 : %.2f\n",p2.rat);
}