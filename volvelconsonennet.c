//wap to check given char is vovel or consonent.
#include<stdio.h>
void main()
{
  char ch;
  printf("enter alphabet : ");
  scanf("%c",&ch);
  if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
  {
    printf("char is vovel");
  }
  else{
    printf("char is consonent");
  }
}