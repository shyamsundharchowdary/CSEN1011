#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c&&(b+c)>a&&(a+c)>b)
	{
		if(a==b&&b==c&&c==a)
		printf("Equilateral triangle");
		else if(a==b||b==c||c==a)
		printf("isoceles triangle");
		else
		printf("scalane triangle");
	}
	else
	printf("triangle not possible");
}
