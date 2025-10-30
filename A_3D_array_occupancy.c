/*
NAME:Charles maina
REG NO:CT100/G/26178/25
DESCRIPTION:A 3D ARRAY THAT DISPLAYS OCCUPANCY FOR EVERY FLOOR IN EACH BRANCH
*/

#include<stdio.h>//pre-processor directives

//main fuction
int main() {
	int chain[3][5][10] ={
	{//BRANCH 1
		(1,0,1,0,1,0,1,1,0,1),//floor 1
		(1,1,0,0,1,0,1,0,1,0),//floor 2
		(0,1,1,1,0,0,1,0,1,1),//floor 3
		(1,0,0,0,1,0,1,1,1,0),//floor 4
		(0,0,1,0,1,1,1,1,0,0)//floor 5
	},
	{//BRANCH 2
		(1,1,0,1,0,1,1,0,0,1),//floor 1
		(0,0,0,1,1,0,1,0,1,0),//floor 2
		(1,0,0,1,0,1,1,0,1,0),//floor 3
		(0,0,0,1,0,1,0,1,0,1),//floor 4
		(1,0,0,1,0,1,1,0,0,1)//floor 5
	},
	{//BRANCH 3
		(1,1,1,0,0,0,1,0,1,0),//floor 1
		(1,0,1,0,1,1,0,0,1,0),//floor 2
		(1,1,0,1,0,1,0,1,0,1),//floor 3
		(1,0,1,0,1,0,1,0,0,1),//floor 4
		(1,0,0,0,0,0,1,1,1,0)//floor 5
	}
	};
	int branch,floor,room;
	int totalOccupied =0;
	
	//for loop start;stop;step
	for(branch=0;branch<3;branch++) {
		for(floor=0;floor<5;floor++){
			for(room=0;room<10;room++){
				totalOccupied += chain[branch][floor][room];
				
			}
		}
	}
		
		
		
		//display the total numbet of occupied rooms across all branches
		printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);
	
		return 0;
	}