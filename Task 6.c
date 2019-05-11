#include<stdio.h>
int main(void)
{
	int n=0,a=0,b=0,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);b=n;
	while(n)
	{
		a=n%10;
		rev=rev+(a*a*a);
		n=n/10;
	}
		if(rev==b)
		{
			printf("\n%d is a Armstrong Number",rev);
		}
		else
		{
			printf("%d is not a armstrong number",rev);
		}
	return 0;
}
