#include<stdio.h>
#include<string.h>
int main(void)
{
	char  a[50];int i=0,flag=1;
	scanf("%s",a);
	for(i=0;i<strlen(a)/2;i++)
	{
		if(a[i]!=a[strlen(a)-1-i])
		
		{
			flag=0;break;
		}
	}
	if(flag==0)
	{
		printf("Not palindrome string");
	}
	else
	{
		printf("palindrome string");
	}
	
	return 0;
}
