#include<stdio.h>
int main(void)
{
	printf("Enter the size of array:");
	int n=0,i=0,j=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(arr[j]<arr[i])
		{
			arr[i]=arr[i]+arr[j];
			arr[j]=arr[i]-arr[j];
			arr[i]=arr[i]-arr[j];
		}
	}
	}
		printf("smallest=%d\n",arr[0]);
	printf("largest=%d\n",arr[n-1]);
	return 0;
}
