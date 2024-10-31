/*Author: Lawrence Kigotho Njoroge
ADM no: CT101/G/21996/24
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
	char name[50];
	float marks;
	int i;
	int n;
	FILE *fptr;
	
	fptr = fopen("C:\\lance\\Edit.txt", "w");
	
	printf("Enter n (number of students): ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++) {
		printf("Enter the names of students%d: ", i+1);
		scanf(" %[^\n]", &name);
		
		printf("Enter student's marks%d: ", i+1);
		scanf("%f", &marks);
		
		fprintf(fptr, "%s\n%.2f\n", name,marks);
	}
	printf("Data upload successful\n");
	
	fclose(fptr);
	return 0;
}
