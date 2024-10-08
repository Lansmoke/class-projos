/*Program to run do...while loop
Author: Lawrence Njoroge
Reg No: CT101/G/21996/24
*/
#include<stdio.h>
int main () {
	int i;
	int stop;
	int sum = 0;
	
	//Ask for start point
	printf("Enter the start point: ");
	scanf("%d", &i);
	
	//Ask for stop point
	printf("Enter the end point: ");
	scanf("%d", &stop);
	
	do{
		printf("%d\n", i);
		
		sum = sum +i;
		i++;
	}
	
	while(i<=stop);
	
	printf("The sum is %d", sum);
	
	return 0;
}
