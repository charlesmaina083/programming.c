/*
NAME:Charles maina
REG:CT1OO/G/26178/25
DESCRIPTION:A C Program to enter the correct password "1234"to log.
*/

#include<stdio.h>

int main () {
	int password=1234;//correct password
	int pwd;
		int i =0;//start 
	
	//do-while loop
	do {
		//prompt user to password
		printf("Enter password:");
		scanf("%d",&pwd);
		i++;//step
		
	}
	
	//stop
	while(password !=pwd);
	
	//result after correct password
       printf("Access Granted\n");
       
       return 0;
}