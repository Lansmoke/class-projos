/*Author: Lawrence Kigotho Njoroge
ADM no: CT101/G/21996/24
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
	char name[30];
	float marks;
	FILE*fptr;
	int i;
	
	//Opening file in write mode
	fptr=fopen("students.txt", "w");
	 if (fptr==NULL) {
	 	printf("Error opening the file!");
	 	exit(1);
	 }
	 
	 //collect data for 5 students
	 for(i=0;i<5;i++) {
	 	printf("Enter the name of student %d: ", i+1);
	 	scanf(" %[^\n]", name);
	 	
	 	printf("Enter the marks of student %d:",i+1);
	 	scanf("%f", &marks);
	 	
	 	fprintf(fptr, "%s %.2f\n", name, marks);
	 }
	 
	 //write to file in format>>name markslh
	 printf("Data successfully written to file.\n");
	 
	 //close file
	 fclose(fptr);
	 
	 return 0;
}
