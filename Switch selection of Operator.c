#include <stdio.h> 
int main() 
{ 
   int n, a, b, sum, sub, pro, div;
   printf("Enter two number : \n");
   scanf("%d%d", &n, &a);
   printf("\n 1 for sum\n 2 for Substraction\n 3 for Product \n 4 for Division\n");
   printf("\nEnter the operator :");
   scanf("%d", &b);
   switch(b){
    case 1:
        sum = n + a;
        printf("sum is %d", sum);
        break;
    case 2:
        sub = n - a;
        printf("Subs is %d", sub);
        break;
    case 3:
        pro = n * a;
        printf("Product is %d", pro);
        break;
    case 4:
        div = n + a;
        printf("Division is %d", div);
        break;
    default:
        printf("Invalid input");
        break;
    
}
 }