#include<stdio.h>
int main(void)
{
	int n=0,a=0,b=0,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);b=n;
	while(n)
	{
		a=n%10;
		rev=(rev*10)+a;
		n=n/10;
	}
		printf("------------------------------\nReverse of the number is:=%d",rev);
	return 0;
}
