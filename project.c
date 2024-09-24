#include<stdio.h> 
int main (){
	char a ;
	char name[] = {} ;
	int age ;
	float salary ;
	double budget ;
	printf("Enter a character: ");
	scanf("%c",&a);
	printf("The character is %c \n", a);
	
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Your name is %s\n", name);
	
	printf("Enter your age: ");
	scanf("%d" , &age);
	printf("You are %d years old.\n" , age);
	
	printf("Enter a character: ");
	scanf("%f", &salary);
	printf("Your monthly salary is %.2f. \n" , salary);
	
	printf("Enter a character : ");
	scanf("%1f", &budget );
	printf("Your weekly budget is %.21f." , budget);
	
	 
	return 0;
}
