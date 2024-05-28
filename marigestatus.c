#include<stdio.h>
void main()
{
 char status;
 int age;
 printf("enter 'm' for marrige or 's' single : ");
 scanf("%c",&status);
 if(status=='s')
 {
   char gender;
   printf("enter 'f' for female and 'm' for male : ");
   scanf(" %c",&gender);
   if(gender=='f')
   {
      printf("entre your age :");
      scanf("%d",&age);
      if(age>=18)
      {
        printf("you are eligible for merride");
      }
      else{
         printf("you are not eligible for merride");
      }
   }
   else if(gender=='m')
   {
      printf("entre your age :");
      scanf("%d",&age);
      if(age>=21)
      {
        printf("you are eligible for merride");
      }
      else{
         printf("you are not eligible for merride");
      }
   }
   else
   {
    printf("please enter f or m ");
   }
 }
 else if(status=='m')
 {
    printf("you are allready merride");
 }
 else{
    printf("please enter m or s");
 }
}