#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int book_id;
	int due_date;
	int return_date;
	int days_overdue;
	float finerate;
	float fineamount;
	
	printf("Enter the book id: ");
	scanf("%d", &book_id);
	
	printf("Enter the due date: ");
	scanf ("%d", &due_date);
	
	printf("Enter the return date: ");
	scanf("%d", &return_date);
	
	days_overdue = return_date - due_date;
	
	if(days_overdue <=7) {
		finerate = 20;
	}
	else if (days_overdue <=14) {
		finerate = 50;
	}
	else {
		finerate = 100;
	}
	fineamount = days_overdue * finerate;
	
	printf("The Book ID is %d\n" , book_id);
	printf("The due date is: %d\n", due_date);
	printf("The return date is: %d\n", return_date);
	printf("The days overdue are: %d\n", days_overdue);
	printf("The finerate is: %f\n", finerate);
	printf("The total fine amount is: %f\n", fineamount);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
