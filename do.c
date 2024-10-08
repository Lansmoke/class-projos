/* Author: Lawrence Kigotho
Reg No: CT101/G/21996/24
Program for do...while
*/

#include<stdio.h>
int main () {
	int i=i;
	int sum=0;
	
	do{
		printf("%d\n", i);
		sum = sum + i;
		i++;
	}
	while (i<=20);
	printf("The sum is %d\n", sum);
	
	return 0;
}
