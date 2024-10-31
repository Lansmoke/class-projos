/*Author: Lawrence Kigotho Njoroge
Adm no: CT101/G/21996/24
*/
#include<stdio.h>
#include<stdlib.h>

int main () {
	char sentence[100];
	FILE *fptr;
	
	//Opening file in append  mode
	fptr=fopen("C:\\lance\\data.txt", "a");
	
	if (fptr==NULL) {
		printf("Eror accessing the file");
		exit(1);
		
	}
	
	printf("Compose a sentence: ");
	scanf(" %[^\n]", sentence);
	
	fprintf(fptr, "%s\n", sentence);
	
	fclose(fptr);
	printf("Sentence successfully appended to file. \n");
	
	return 0;
}
