//to find the average of given number
#include <stdio.h>
void main()
{
	int a[100],b ,c, i,sum=0, avg;
	printf("Marks of how many subjects : ");
	scanf("%d",&b);
	printf("Enter the number of subjets to find the average of : ");
    
	for(i=0;i<b;i++){
    	scanf("%d",&a[i]);
    	sum = sum + a[i];	
}
printf("average of %dsubject is : %.2f",b,(float)sum/b);	
}
