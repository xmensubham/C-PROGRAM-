//conversion of time to minutes and second
#include <stdio.h>
void main()
{
    int a, hour, mins, sec;
    hour=mins=sec=0;
    printf("Enter the Time in Minutes : ");
    scanf("%d", &a);
    hour= a/60;
    mins = a%60;
    printf("\n");
    printf("%d Hours : %d Minutes : %d Seconds", hour, mins, sec);
    printf("\n");
}
