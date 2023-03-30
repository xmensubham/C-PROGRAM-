#include <stdio.h> 
int main() 
{ 
   int n, i , j;
   printf("Enter Number upto which you want to find multiplication of : : \n");
   scanf("%d", &n);
   for(i=1;i<=n;i++){
printf("\n");
    for(j=1;j<=10;j++){
    printf("%d x %d = %d \n", i, j, i*j);
}
  }
 }