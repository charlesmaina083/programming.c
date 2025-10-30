/*
NAME:Charles maina
REG NO:CT100/G/26178/25
DESCRIPTION:A 2D ARRAY that displays occupancy for every floor
*/

#include<stdio.h>//pre-processor directives

//main fuction
int main() {
	int occupancy[5][10] ={
	{1,0,1,0,0,0,1,1,0,1},//floor 1
	{0,1,0,1,1,0,0,0,1,1},//floor 2
	{1,1,0,0,0,1,0,1,1,0},//floor 3
	{0,0,1,1,0,1,1,0,0,1},//floor 4
	{1,0,0,1,0,0,1,0,1,0},//floor 5
	};
	
	int floor,room,occupied,vacant;
	
	//print table header
	printf("Floor\toccupied\tvacant\n");
	
	//for loop satart;stop;step
	for(floor=0;floor<5;floor++) {
		occupied =0;
		vacant =0;
		
		//for loop srart;stop;step
		for(room=0;room<10;room++) {
			occupied += occupancy[floor][room];//add 1 if occupied
			vacant += 1 - occupancy[floor][room];//add 1 if vacant
		}
		
		//display the results of the floor
		printf("%d\t%d\t%d\n", floor + 1,occupied,vacant);
	}
	
	return 0;
	}