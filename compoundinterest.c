#include <stdio.h>
#include <math.h>//since we will use pow formula

int main() {
	float principal;//%f
	float time;//%f
	float rate;//%f  (r)
	float compoundinterest;//%f
	float amount;//%f  (a)
	int n;//number in which the interest will be compounded annually
	
	printf("Enter the principal amount: ");
	scanf("%f", &principal);
	
	printf("Enter the duration (in years): ");
	scanf("%f" , &time);
	
	printf("Enter the rate per annum (in percentage)");
	scanf("%f" , &rate);
	
	printf("Enter the number of times interest is compunded yearly: ");
	scanf("%d" , &n);
	 //converting rate to a decimal
	 rate = rate / 100;
	
	//calculating the amount using formula
	amount = principal * pow((1 + rate / n), n * time);
	
	  printf("The amount is %.2f\n" , amount);
	
	 //calculating the compound interest using formula
	 compoundinterest = amount - principal;
	
	 printf("The compound interest is %.2f\n" , compoundinterest);
	 
	 
	 return 0; 
	
	
	
	
	
	
	
	
	
} 
