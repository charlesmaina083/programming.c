/*
Name:Charles maina
Reg:CT100/G/26178/25
Description:A C Program to check final exam eligibility
*/

#include<stdio.h>//pre-processor directive scanf(),printf()

//main function
int main(){
	float Attendance,Averange_marks;
	
	//prompt students to enter attendance and averange marks
	printf("Enter attendance percentage:\n");
	scanf("%f", &Attendance);
	
	printf("Enter Averange_marks:\n");
	scanf("%f",&Averange_marks);
	
	//check eligibility
	if (Attendance>=75 && Averange_marks >=40) {
		printf("Eligible for final exam\n");
	} else{ 
		printf("Not eligible\n");
	}
	
	return 0;
}