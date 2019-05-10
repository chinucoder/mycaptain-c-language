#include<stdio.h>
int main(void)
{
	float a,b,c;
	printf("enter marks in first subject:");
	scanf("%f",&a);
		printf("enter marks in second subject:");
	scanf("%f",&b);
		printf("enter marks in third subject:");
	scanf("%f",&c);
	float avg=(a+b+c)/3;
	printf("\nAverage=%f",avg);
	return 0;
}
