/*
NAME:Charles maina
REG N0:CT100/G/26178/25
DETAILS:A C program dealing with transactions of sales.txt,calculating the total sales and display it
*/

#include<stdio.h>//pre-processor directives

//main function
int main() {
	FILE*file;
	float transactions,totalsales =0.0;
	
	//open the file in the read mode
	file =fopen("sales.txt", "r");
	if(file ==NULL) {
		printf("Error opening file\n");
		return 1;
	}
	
	//read the transaction and add to get total
	while (fscanf(file, "%f", &transactions) ==1) {
		totalsales += transactions;
	}
	
	//close the file
	fclose(file);
	
	//display total sales
	printf("Total sales for the day: %.2f\n", totalsales);
	
	return 0;
}
