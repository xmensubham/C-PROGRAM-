#include <stdio.h>
void main()
{
   int a, b, c, d, e;
   printf("Enter the number to check : ");
   scanf("%d", &a);
   e = a;
  while(a>0)
  {
  c =a%10; //gives ud the last digit of the input number
  d = d*10+c; /* here d is initilized   to 0 at first then when the when it is
                 1 it multilies to 10 and then adds to reminder 
                 and it updates the value of c*/
  a = a/10; //it omits the last digit 
  }
  printf("%d ", d); 
  	
if(e==d)
  {
   printf("Palindrome"); 
} else{
	printf("Not a palindromic number");
}
}
