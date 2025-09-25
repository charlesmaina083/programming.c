/*
Name:Charles maina
Reg:CT100/G/26178/25
Description:A C program to find the volume and surface area of a cylinder
V=PI*radius*radius*height
S.A=(2*PI*radius*radius)+(2*pI*radius*height)
*/

#include<stdio.h>
#define PI 3.14159265

int main () {
	//variables declaration 
	float radius,height;
	
	//prompt the user to enter the value
	printf("\n Enter the radius: ");
	scanf("%f", &radius);
	
	printf("\n Enter the height:");
	scanf("%f", &height);
	
	//calculate the volume
	float volume=PI*radius*radius*height;
	
	//calculate the surface area
	float Surface_area=(2*PI*radius*radius)+(2*PI*radius*height);
	
	//output
	printf("Volume is: %.2f\n", volume);
	printf("Surface_area is: %.2f\n", Surface_area);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	