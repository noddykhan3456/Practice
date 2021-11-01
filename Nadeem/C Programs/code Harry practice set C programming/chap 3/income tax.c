#include <stdio.h>

int main(void) {
	int income;
	printf("enter your income\n\n");
	scanf("%d",&income);
	float tax;
	if(250000<=income && income<=500000){
	    tax = 5*(income-250000);
	}
	if(500000<=income && income<=1000000){
	    tax =0.20*(income-500000);
	}
	if(income>=1000000){
	    tax =0.3*(income-1000000);
	}
	printf("your IT is %f",tax);
	return 0;
}

