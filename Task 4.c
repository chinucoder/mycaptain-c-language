#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[50],b[50];
	scanf("%s",a);
	scanf("%s",b);
	strcat(a,b);
	printf("%s\n\n",a);
	return 0;
}
