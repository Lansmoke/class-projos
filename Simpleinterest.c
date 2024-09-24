#include <stdio.h>
int main() {
	
	int principal;
	float rate;
	float interest;
	int  time;
	
	//asking for the values to use'
	printf("Write your principal amount: "); 
	scanf("%d" , &principal);
	printf("Your principal amount is %.2d\n" , principal);
	
	printf("State your rate (yearly): ");
	scanf("%f" , &rate);
	printf("%f is your rate per annum\n" , rate);
	
	printf("What is the duration (in years)\n: ");
	scanf("%d" , &time);
	printf("The time in years is %.2d\n " , time);
	
	interest = (principal*rate*time) /100; //formula to calculate simple interest
	
	printf("The simple interest is: %.2f\n" , interest); //to display the answer
	
	
	return 0;
}
