/* Alogrithm
   Step1: Take 2 numbers 
   step2:swap them using temp variable
   step3: output */

#include<stdio.h>
int main()
{
	int a=1,b=2,temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d=a,%d=b",a,b);
	return 0;
}

//output= a=2,b=1;
