#include <stdio.h> 
int main() 
{ 
   int n;
x:
   printf("Enter the year you want to check : \n");
   scanf("%d", &n);
  if(n%4 == 0 && n%100!=0)
{
printf("Leap Year\n");
}else{
    printf("Not a leap Year\n");
}
goto x;
 }