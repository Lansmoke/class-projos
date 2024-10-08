/*Program to loop using for
Author: Lawrence Kigotho Njoroge
Reg No: CT101/G/21996/24
*/
#include<stdio.h>
int main () {
	int i;
	int sum = 0;
	int start;
	int stop;
	
	//Ask where to start
	printf("Enter the starting point: ");
	scanf("%d", &start);
	
	//Ask for the stopping point
	printf("Enter the stop point: ");
	scanf("%d", &stop);
	
	//introduce the loop
	for(i=start;i<=stop;i++)  {
		printf("%d\n", i);
		
		//formula for sum
		sum = sum + i;
	}	
	printf("The sum is %d", sum);
	
	
	return 0;
}
