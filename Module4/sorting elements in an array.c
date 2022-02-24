#include<stdio.h>
int main()
{
	int j,l,a[10],i,n,temp;;
	//enter size of array;
	scanf("%d",&n);
	//enter elements to an array;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=i;
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
