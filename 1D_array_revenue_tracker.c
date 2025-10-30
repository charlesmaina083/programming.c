/*
Name:Charles maina
REG NO:CT100/G/26178/25
DESCRIPTION:A 1D ARRAY FOR REVENUE TRACKER
*/

#include<stdio.h>//pre-processor directives

//main function
int main(){
	
	int revenue[7];
	
	int total =0,Average,i;
	
	//input the revenuefor each day
	printf("Enter the revenue for each day of the week:\n");
	
	//calculate the total volume
	//start;stop;step
	for(i=0; i<7; i++) {
		printf("Day %d: ", i+1);
		scanf("%d", &revenue[i]);
		total += revenue[i];
	}
	
	//calculate average daily revenue
	Average=total / 7;
	
	//display weekly daily revenue
	printf("total weekly revenue: %d\n",total);
	
	//display the average daily revenue
	printf("Average daily revenue: %d\n", Average);
	
	return 0;
}
	