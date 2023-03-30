#include <stdio.h>
void main(){
  int year=0;
  printf("Input the year : ");
  scanf("%d",&year);
 if(year%4==0){
   printf("\n%d is Leap Year\n",year);
  }else{
   printf("\n%d is not a leap year\n\n", year);
}
}
    
    