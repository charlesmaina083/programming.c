/*
NAME:Charles maina
REG NO:CT100/G/26178/25
DETAILS:A C Program to store book titles
*/

#include<stdio.h>//pre-processor directives

//main function
int main() {
	
	FILE *file;
	char booktitle[100];
	//open the file in append mode existing data is not deleted
	file=fopen("borrowed_books.txt","a");
	if(file ==NULL) {
		printf("Error opening file.\n");
		return 1;
	}
	
	//prompt the user to enter the book title
	printf("Enter the title of the book borrowed: ");
	
	//read the whole line includind spaces
	fgets(booktitle,100,stdin);
	
	//write the book title to the file 
	fprintf(file, "%s\n", booktitle);
	
	//close the file
	fclose(file);
	
	//display the booktitle
	printf("%s", booktitle);
	
	return 0;
}
	
