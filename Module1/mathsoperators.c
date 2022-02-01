/* Algorithm 
  Step1 : Take any two numbers 
  Step2 : write down the whether you want to do sum or product
  Step3 : Run program */


#include<stdio.h>
int main()
{
	int a=13,b=4;
	int sum,product,difference,remainder,quotient;
	sum = a + b ;
	printf(" a + b = %d \n", sum);
	
	difference = a - b ;
	printf(" a - b = %d \n", difference);
	
	product = a * b ;
	printf("a * b = %d \n", product);
	
	remainder = a % b ;
	printf(" a % b = %d \n", remainder);
	
	quotient = a / b ;
	printf(" a / b = %d \n", quotient);
	
	return 0;
	
	}
	
	//output = sum=17,product=52,difference=9,remainder=1,quotient=3 //
