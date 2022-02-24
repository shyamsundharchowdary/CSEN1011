#include<stdio.h>
int isprimenumber(int n){
	for (int i=2 ;i<n; ++i){
		if (n%i==0)
		return 0;
	}
	return 1;
}
int main(){
	int n=67,isprime;
	if (n==1){
		printf("%d is neither prime nor composite",n);
	}
	else {
		isprime= isprimenumber(n);
		if (isprime==1)
		printf("%d is a prime number",n);
		else 
		printf ("%d is not prime",n);
	}
	return 0; 
}
