//simple c program(Hello world),single line comment
/*
Name:Charles maina
Reg:CT100/G/26178/25
Description:Hello world program
*/

#include<stdio.h>//pre-processor directive scanf(),printf()

//main function
int main(){
	int height;
	int phonenumber;
printf("Enter your height:\n");
scanf("%d", &height);
printf("Enter your phone number:\n");
scanf("%d", &phonenumber);
printf("Your height is %d",height);
printf("Your phonenumber is %d",phonenumber);
return 0;
}