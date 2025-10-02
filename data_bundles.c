/*
Name:Charles maina
Reg:CT100/G/26178/25
Description:A C Program to show bundles
*/

#include<stdio.h>//pre-processor directive printf(),scanf()

//main fuction() 
	int main() {
		int choice;
		
		//display the menu
		printf("select data bundles\n");
		printf("1. 100MB @50 KES\n");
		printf("2. 500MB @200 KES\n");
		printf("3. 1GB @350 KES\n");
		printf("4. 2GB @600 KES\n");
		
		//choose data bundles
		printf("Enter your choice (1-4):");
		scanf("%d", &choice);
		
		//results
		if(choice==1) {
			printf("you selected 100MB. Cost=50KES");
		}
		else if(choice == 2) {
			printf("You selected 500MB. Cost =200KES");
		}
		else if(choice ==3) {
			printf("You selected 1GB. Cost =350KES");
		}
		else if(choice ==4) {
			printf("You selected 2GB.Cost = 600KES");
		}
		else {
			printf("Invalid choice");
			
		}
		
		return 0;
	}