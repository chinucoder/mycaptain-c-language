#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void)
{
	printf("1.CELCIUS TO FARENHEIT\n");
	printf("2.FARENHEIT TO CELCIUS\n");
	printf("3.EXIT\n");
	printf("----------------------------------------\n");
	int a=0;
	scanf("%d",&a);
	switch(a)
	{
		case 1:{
			printf("Enter temperature in celcius:");
			int b;
			scanf("%d",&b);
			b=(b*(9/5))+32;
			printf("%d F",b);
			break;
		}
		case 2:{
			printf("Enter temperature in farenheit:");
			int b;
			scanf("%d",&b);
			b=(b-32)*(5/9);
			printf("%d C",b);
			break;
		}
		case 3:{
		exit(0);
			break;
		}
		
	}
	return 0;
}
