//store table in file
#include<stdio.h>
void main()
{
 int n,i;
 FILE *pf;
 pf=fopen("atable.txt","a");
 printf("enter a num: ");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
    printf("%d * %d = %d\n",n,i,n*i);
    fprintf(pf,"%d * %d = %d\n",n,i,n*i);
 }
 fprintf(pf,"\n____________________________\n\n");
 fclose(pf);
}