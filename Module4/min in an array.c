#include<stdio.h>
int main()
{
	int min,a[10],i,n;
	//enter size of array;
	scanf("%d",&n);
	//enter elements to an array;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	//minimum in an array is
	printf("%d",min);
}
