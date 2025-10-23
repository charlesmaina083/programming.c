/*
Name:Charles maina
REG NO:CT100/G/26178/25
DETAILS:A C Fuctions that changes fahrenhelt to celsius
*/

#include<stdio.h>//pre-processor directives

//fuction prototype
float convertToCelsius(float f);

int main() //main function
{
	float F,C;
	printf("Enter temperature in fahrentheist: ");
	scanf("%f",&F);
	
	C =convertToCelsius(F);
	
	printf("Temperature in celsius = %.2f C\n", C);
	
	return 0;
}

//function declaration
float convertToCelsius (float F)
{
	int C;
	
	C =(F -32) *5/9;
	
	return C;
	
}