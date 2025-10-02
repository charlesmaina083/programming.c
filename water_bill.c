/*
Name:Charles maina
Reg:CT100/G/26178/25
Description:A C program for water bill calculation
*/

#include<stdio.h>//pre-processor directive scanf(),printf()

//main fuction
int main(){
	int units;
	float bill;
	
	//prompt the user to enter water units consumed
	printf("Enter water units consumed:\n");
	scanf("%d", &units);
	
	//calculating bill
	if (units <=30) {
		bill=units*20.0;
	}
	else if (units>=31 && units<=60) {
	bill =units *25.0;
	}
	else {
		bill =units *30.0;
	}
	
	//results
	printf("Total bill =%.2f KES",bill);
	
	return 0;
}