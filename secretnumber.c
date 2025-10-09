/*
NAME: Charles Maina
REG: CT100/G/26178/25
DESCRIPTION:A c program for guessing the correct number between 0-20
*/

#include<stdio.h> //pre-processor directives

//main function
int main () {
	int secretNumber = 12;//correct number
	int guess;
	int attempts = 0;
	
	//guess the number untill the correct one
	while (guess !=secretNumber) {
		//prompt user to enter a guess
		printf("Enter your guess:");
		scanf("%d", &guess);
		attempts++;
		//results after guessing the number
		if (guess > secretNumber) {
			printf("Too high!\n");
		}
		else if (guess < secretNumber) {
			printf("Too low!\n");
		}
		else {
			printf("Congratulations!");
			printf("Total attempts: %d\n", attempts);
		}
	}
	return 0;
}