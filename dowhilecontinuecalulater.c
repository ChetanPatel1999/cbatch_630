#include<stdio.h>
void main()
{
    int n;
 do
 {
  printf("my calculater ........\n");
  printf("press 1 for add : \n");
  printf("press 2 for sub : \n");
  printf("press 3 for mul : \n");
  printf("press 4 for div : \n");
  printf("press 5 for exit : \n");
  printf("enter number : ");
  int num,a,b,ans;
  scanf("%d",&num);
 switch (num)
  {
   case 1:
   printf("enter frist number : ");
   scanf("%d",&a);
   printf("enter second number : ");
   scanf("%d",&b); 
   ans=a+b;
   printf("%d + %d = %d\n",a,b,ans);
   break;
   case 2:
   printf("enter frist number : ");
   scanf("%d",&a);
   printf("enter second number : ");
   scanf("%d",&b); 
   ans=a-b;
   printf("%d - %d = %d\n",a,b,ans);
   break;
   case 3:
   printf("enter frist number : ");
   scanf("%d",&a);
   printf("enter second number : ");
   scanf("%d",&b); 
   ans=a*b;
   printf("%d * %d = %d\n",a,b,ans);
   break;
   case 4:
   printf("enter frist number : ");
   scanf("%d",&a);
   printf("enter second number : ");
   scanf("%d",&b); 
   ans=a/b;
   printf("%d / %d = %d\n",a,b,ans);
   break;
   case 5:break;
   default:printf("please press 1 to 5 number ");
 } 
    printf("you want to continue calculater press 1 :");
    scanf("%d",&n);
 } 
 while (n==1);
 
}