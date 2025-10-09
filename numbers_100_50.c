/*
NAME:Charles maina
REG:CT100/G/26178/25
DESCRIPTION:A C Program to enter all numbers 100 down to 50in descending order
*/

#include<stdio.h>

//main fuction
int main() {
	
	//for (start,stop,step)
	int i;
	for(i=100; i>=50; i--) {
		printf("%d \n",i);
	}
	
	return 0;
}