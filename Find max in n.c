#include<stdio.h>
void main()
{
  int n, i, max, a[20];
  printf("Enter the number of elements:");
  scanf("%d", &n);
  for(i=0; i<n; i++)
  {
    printf("Enter the number:");
    scanf("%d", &a[i]);
  }
 max=a[0];
  for(i=1;i<n;i++){
        if(a[i]>max)
         max = a[i];
        }
printf("\nMaximum number is %d", max);
}