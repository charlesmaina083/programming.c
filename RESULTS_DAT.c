/*
NAME: Charles maina
REG NO: CT100/G/26178/25
DETAILS: A C Program for students examination storage
*/

#include<stdio.h>//pre processor directive

//main function
 int main() {
	FILE *file;
	char name[50], regNo[20];
	int totalmarks;
	
	//open the binary file in read mode
	file = fopen("results.dat", "rb");
	if (file == NULL) {
		printf("Error opening file.\n");
		return 1;
	}
	
	printf("Students Results:\n");
	
	//read until EOF
	while (fscanf(file, "%s %s %d", name, regNo, &totalmarks) == 3) {
		printf("Name :%s\n", name);
		printf("Total Marks: %d\n", totalmarks);
	}
	
	//close the file after use
	fclose(file);
	return 0;
}