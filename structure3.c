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
 int n;
 printf("enter no of pen :");
 scanf("%d",&n);   
 struct pen p[n];//p[0],p[1],p[2]
 int i;
 for(i=0;i<n;i++)//2
 {
 printf("enter p%d info: \n",i+1);
 printf("enter pen name : ");
 scanf("%s",p[i].name);
 printf("enter price : ");
 scanf("%d",&p[i].price);
 printf("enter pen rating : ");
 scanf("%f",&p[i].rat);
 }
for(i=0;i<n;i++)
{
 printf("p%d info : \n",i+1);
 printf("name of pen : %s\n",p[i].name);
 printf("price of pen : %d\n",p[i].price);
 printf("rating of pen : %.2f\n",p[i].rat);
}
}