//fseek()// its set pointer at the specific
//position in the file
#include<stdio.h>
void main()
{
   FILE *ptr;
   char ch;
   ptr=fopen("abc.txt","r");
   fseek(ptr,5,SEEK_SET);
   printf("pos = %d\n",ftell(ptr));
   while(1)
   {
    ch=fgetc(ptr);
    if(ch==EOF)
    {
        break;
    }
    printf("%c",ch);
   }
   printf("\n");
  // fseek(ptr,0,SEEK_SET);
  rewind(ptr);//its set pointer at the begining
    while(1)
   {
    ch=fgetc(ptr);
    if(ch==EOF)
    {
        break;
    }
    printf("%c",ch);
   }
   int n=ftell(ptr);//its return pointer current posintion
   printf("\ncurrent pos = %d",n);
   fclose(ptr);
}