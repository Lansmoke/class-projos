#include <stdio.h>

int main(){
	
	int age;
	int income;
	
	printf("What is your age: ");
	scanf("%d", &age);
	
	printf("What is your annual income: ");
	scanf("%d", &income);
	
	if(age >= 21) {
		printf("Congratulations, you qualify for a loan");
	}
	else{
		printf("Unfortunately, we are unable to offer you a loan at this time.");
	}
	
	if(income >= 21000) {
		printf("Congratulations, you qualify for a loan");
	}
	else{
	printf("unfortunately, we are unable to offer you a loan at this time.");
}
	
	
	
	
	return 0;
}
