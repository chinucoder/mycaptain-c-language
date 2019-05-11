#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
