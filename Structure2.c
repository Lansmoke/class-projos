/*structure
Author: Lawrence Kigotho Njoroge
Reg no: CT101/G/21996/24
*/

#include<stdio.h>
#include<string.h>

//structure book
struct book{
	char title[30];
	char author[30];
	int year;
	char ISBN[13];
	float price;
	
}book1;

int main () {
	printf("Enter the book title: ");
	scanf(" %[^\n]", &book1.title);
	
	printf("Enter the book author: ");
	scanf(" %[^\n]", &book1.author);
	
	printf("Enter the publication year: ");
	scanf(" %d", &book1.year);
	
	printf("Enter the book's ISBN: ");
	scanf("%s", &book1.ISBN);
	
	printf("Enter the book price: ");
	scanf("%f", &book1.price);
	
	printf(" \nBook Title: %s\n", book1.title);
	printf("Book Author: %s\n", book1.author);
	printf("Publication year: %d\n", book1.year);
	printf("ISBN: %s\n", book1.ISBN);
	printf("Book price: %.2f\n", book1.price);
	
	return 0;
}
