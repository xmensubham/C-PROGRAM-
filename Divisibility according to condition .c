#include <stdio.h>
int input(ints b)
{
    printf("\nEnter the Number : ");
    scanf("%d",&b);
}
int divide(int b)
{
    if(b%2==0){
        printf("%d is divisible by 2", b);
    }else{
        printf("%d is not divisible by 2", b);
    }
}
int main()
{   int a,b;
    printf("What would you like to ckeck : ");
    printf("\n1 - By 2");
    printf("\n2 - By 3");
    printf("\n3 - By 7");
    printf("\n4 - By both 2 and 3");
    printf("\n5 - By 2 , 3 and 7\n");
    scanf("%d", &a);
    if(a == 1){
        input(b);
        divide(b);
    }
}
