/*Program to calculate electricity bill
Author: Lawrence Kigotho Njoroge
Reg No: CT101/G/21996/24
Email:11344lawrencekigotho@gmail.com
*/

#include<stdio.h>
int main() 
{
	
	//variables
	int Customerid;
	float Unitsconsumed, bill, Totalbill, Chargesperunit;
	char Customername;
	
	//Ask for the name
	printf("Enter the Customer name: ");
	scanf(" %[^\n]" , &Customername);
	
	//Ask for the id
	printf("Enter the customer id: ");
	scanf("%d", &Customerid);
	
	//Ask for the amount of units used
	printf("Enter the amount of units consumed: ");
	scanf("%f", &Unitsconsumed);
	
	//introduce if...else statement for units used
	if(Unitsconsumed<=199){
		Chargesperunit = 1.20;
	}
	else if(Unitsconsumed>=200 &&Unitsconsumed<400) {
		Chargesperunit = 1.50;
	}
	else if(Unitsconsumed>=400 &&Unitsconsumed< 600) {
		Chargesperunit = 1.80;
	}
	else{
		Chargesperunit = 2.00;
	}
	
	//formula to calculate the bill
	bill = Chargesperunit + Unitsconsumed;
	
	printf("The bill is %.2f\n", bill);
	
	//if...else statement for total bill
	if(bill>400) {
		Totalbill = bill +  (0.15 * bill);
	}
	else if(bill < 100){
		printf("Bill cannot be less then 100. \n");
		Totalbill = bill;
	}
	else{
		Totalbill = bill;
	}
	
	//output of the total bill
	printf("The total bill is %.2fc\n", Totalbill);
	
	//Display customer's name
	printf("The Customer_name is %s\n", Customername);
	
	//Display the customer id
	printf("The Customer id is %d\n", Customerid);
	
	//Display the units used
	printf("The units consumed: %.2f\n", Unitsconsumed);
	
	//Display charges per unit
	printf("Charges per unit are: %.2f\n", Chargesperunit);
	
	//Display total bill
	printf("The total bill is: %.2f\n", Totalbill);
	
	
	return 0;
}
