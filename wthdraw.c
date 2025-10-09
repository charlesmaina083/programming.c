/*
NAME:charles maina
REG:CT100/G/26178/25
DESCRIPTION:A C program using while loop to enter amount to withdraw until balance leads zero
*/

#include<stdio.h>include 

//main fuction
int main() {
	int amount;
	int balance =6000;//start
	printf("Your balance is %d \n", balance);
	
	while(balance>0)//stop
	{
   printf("Enter the amount to withdraw: \n");
   scanf("%d", &amount);
   balance -=amount;//step,balance =balance-amount
   
   if (balance > 0) {
	   printf("Remaining balance: %.2d\n", balance);
   }
   
   }
   printf("Insufficient balance");//display after withdrawing all balance
   
   return 0;
   }