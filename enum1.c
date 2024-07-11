//enum example in c language
// enum is a user defined data type 
// which is used to declaire constant 
// integral values.
#include<stdio.h>
enum day{mon='a',tue,wed=90,thu,fri,sat,sun};
enum flag{false,true};
enum val{a=5};
void main()
{
 int c=a+10;
 printf("c=%d\n",c);
 printf("mon = %d\n",mon);
 printf("tue = %d\n",tue);
 printf("wed = %d\n",wed);
 printf("thu = %d\n",thu);
 printf("fri = %d\n",fri);
 printf("sat = %d\n",sat);
 printf("sun = %d\n",sun);
 printf("true= %d\n",true);
 printf("flase= %d\n",false);
}