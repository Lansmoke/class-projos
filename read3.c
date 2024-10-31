/*Author: Lawrence Kigotho Njoroge
ADM no: CT101/G/21996/24
*/
#include<stdio.h>
#include<stdlib.h>

int main () {
	char sentence[100];
	FILE *fptr;
	
	fptr = fopen("C:\\lance\\data.txt", "w");
	
	if (fptr==NULL) {
		printf("Erro accessing file");
		exit(1);
		
	}
	printf("Compose a sentence: ");
	scanf("%[^\n]", sentence);
	
	fprintf(fptr, "%s\n", sentence);
	
	fclose(fptr);
	
	return 0;
}
