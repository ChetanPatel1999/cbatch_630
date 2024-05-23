//if user press 1 so print "good morning"
//if user press 2 so print "good afternoon"
//if user press 3 so print "good evening"
//if user press another number so print "please press 1,2,3 
#include<stdio.h>
void main()
{
 int num;
 printf("enter a num : ");
 scanf("%d",&num);//1
 if(num==1)
 {
    printf("good morning");
 }
  if(num==2)
 {
    printf("good afternoon");
 }
  if(num==3)
 {
    printf("good evevning");
 }
 if(num>3)
 {
     printf("please press 1,2,3");
 }
}