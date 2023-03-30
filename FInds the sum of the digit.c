///checking positivee and negative
#include <stdio.h> 
int main() 
{ 
   int n, rem, sum=0, a;
   printf("Enter the Number to check : ");
   scanf("%d", &n);
  while(0<n)
  {   
  rem = n%10;
  sum = sum + rem;
  n = n/10;
   }
   printf("sum is %d", sum);
 }