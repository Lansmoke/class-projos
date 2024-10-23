/*structure
Author: Lawrence Kigotho Njoroge
Reg No: CT101/G/21996/24
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

int main() {
	//initialize data types of structure
	strcpy(book1.title, "Introduction to programming");
	strcpy(book1.author, "John Smith");
	book1.year =2022;
	strcpy(book1.ISBN, "17372293839");
	book1.price = 49.99;
	
	//print structure components
	printf("Book title: %s\n", book1.title);
	printf("Author: %s\n", book1.author);
	printf("Publication year: %d\n", book1.year);
	printf("ISBN: %s\n", book1.ISBN);
	printf("Book price: %.2f\n", book1.price);
	
	return 0;
}
