/*Author:Lawrence Kigotho Njoroge
Adm no: CT101/G/21996/24
*/
#include<stdio.h>
#include<stdlib.h>

int main () {
	char sentence[100];
	FILE *fptr;
	
	fptr = fopen("C:\\lance\\data.txt","r");
	
	if(fptr==NULL) {
		printf("Error accessing the file");
		exit(1);
	}
	
	fscanf(fptr, " %[^\n]", sentence);
	printf("%s\n", sentence);
	fclose(fptr);
	
	return 0;
}
