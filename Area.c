#include <stdio.h>
int main(){
	int width;
	int length;
	int area;
	
	printf("Write the value of width: ");
	scanf("%d", &width);
	printf("The width is %.2d\n: " , width);
	
	printf("Write the value of length: ");
	scanf("%d", &length);
	printf("The lenght is %.2d\n: " , length);
	
	area = length * width; //formula to find the area
	
	printf ("The area is %.2d" , area);
	
	
	
	return 0;
}
