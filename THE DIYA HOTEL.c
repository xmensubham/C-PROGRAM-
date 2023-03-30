//o check number for Prime 
#include <stdio.h>
void main()
{
   int a, b , c[1000] = {80, 100, 50, 110, 40, 0, 40, 0};
   printf("          --------------------\n");
   printf("          |  THE DIYA HOTEL  |\n");
   printf("          --------------------");
   printf("\n\nCHOOOSE FORM THE MENU :\n");
   printf("\n1 | Thupka           Rs. 80/- ");
   printf("\n2 | Fried rice       Rs. 100/- ");
   printf("\n3 | Thai Roll        Rs. 50/- ");
   printf("\n4 | Chick Burger     Rs. 110/- ");
   printf("\n5 | Chick Puri       Rs. 40/- ");
   printf("\n6 | Veg Momo         Rs. 0/- For Diya ");
   printf("\n7 | Coffee           Rs. 40/- ");
   printf("\n8 | Ice Cream        Rs. 0/- For Diya");
   printf("\n\n\nWhat would you like to have : ");
   scanf("%d", &a);
   printf("\nHow many quantities : ");
   scanf("%d", &b);
   printf("\n\n _____________________________\n\n");
   if(a == 1){
    printf("\n--> Thupka Ordered Successfully\n--> Quantity %d\n--> Price : %d",b, b*c[0]);
   }else if (a == 2){
    printf("\n--> Fried Ordered Successfully\n--> Quantity %d\n--> Price : %d",b, b*c[1]);
   }else if (a == 3){
    printf("\n--> Thai Roll Ordered Successfully\n--> Quantity %d\n--> Price : %d",b, b*c[2]);
   }else if (a == 4){
    printf("\n--> Chick Burger Ordered Successfully\n--> Quantity %d\n--> Price : %d",b, b*c[3]);
   }else if (a == 5){
    printf("\n--> Chick Puri Ordered Successfully\n--> Quantity %d\n--> Price : %d",b, b*c[4]);
   }else if (a == 6){
    printf("\n--> Veg Momo Ordered Successfully\n--> Quantity %d\n--> Price : %d",b, b*c[5]);
   }else if (a == 7){
    printf("\n--> Coffee Ordered Successfully\n--> Quantity %d\n--> Price : %d",b, b*c[6]);
   }else if (a == 8){
    printf("\n--> Ice Cream Successfully\n--> Quantity %d\n--> Price : %d",b, b*c[7]);
   }
    printf("\n\n|____________________________|\n\n");
   
}