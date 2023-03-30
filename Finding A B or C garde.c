#include <stdio.h> 
int main() 
{ 
   int n;
x:
   printf("\nEnter Marks to check : ");
   scanf("%d", &n);
  if(n >= 270)
  {printf("A Grade");
   }else if(n>=170){
   printf("B Grade");
   }else if(n>=70){
  printf("C Grade");
   }else{
   printf("Enter a valid number");
}
goto x;
}