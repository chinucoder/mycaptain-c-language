#include<stdio.h>
 struct book{
	char name[12];
	char author[24];
	char genre[12];
};
void print(struct book s1 );
int main()
{
	static struct book s1;
	printf("Enter Title:");
	scanf("\n%s",s1.name);
	printf("Enter Author:");
	scanf("\n%s",s1.author);
	printf("Enter Genre:");
	scanf("\n%s",s1.genre);
	print(s1);
	return 0;
}
void print(struct book s1)
{
		printf("\n%s",s1.name);
		printf("\n%s",s1.author);
		printf("\n%s",s1.genre);
		
}
