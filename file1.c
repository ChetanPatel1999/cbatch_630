#include<stdio.h>
void main()
{
  FILE *ptr;
  ptr=fopen("abc.txt","a");
  fprintf(ptr,"hi this is file handling");
  fprintf(ptr,"\nthis is second line in file");
  fclose(ptr);
}