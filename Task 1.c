#include<stdio.h>
int main(void)
{
	char str[50];
	int age=0;long long phone_no;
	scanf("%[^\n]%*c",str);
	scanf("%d",&age);
	scanf("%lld",&phone_no);
	phone_no=phone_no/10;
	printf("\n");
	printf("%s\n",str);
	printf("%d\n",age);
	printf("%lld\n",phone_no);
	 return 0;
}
