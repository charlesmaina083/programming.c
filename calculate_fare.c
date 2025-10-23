/*
NAME:Charles maina
REG NO:CT100/G/26178/25
DETAILS:A C fuction to calculate fare
*/

#include<stdio.h>//pre-processor directive

//fuction prototype
float calculateFare(float distance );

int main()//main fuction
{
	float distance,fare;
	
	printf("Enter the distance travelled in Km:");
	scanf("%f",&distance);
	
	fare =calculateFare(distance);
	
	printf("Total fare =Ksh %.2f\n", fare);
	
	return 0;
	
}

//fuction declaration
float calculateFare(float distance) {
	float amount;
	
	amount =distance *50;
	
	return amount;
}