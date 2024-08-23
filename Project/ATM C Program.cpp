#include<stdio.h>
int main(){
	//C program for ATM machine
	int LandmarkCustomer = 10001;
	int NonLandmarkCustomer = 11000;
	int PinA = 20056;
	int BioA = 10101;
	int PinB = 20058;
	int BalanceA = 500000;
	int BalanceB = 400000;
	int Try = 0;
	int max = 3;
	int n;
	int choose;
	int a, b, c, d, subtraction = 0;
	
	printf("..........WELCOME TO THE K-BANK ATM MACHINE..........\n");
	printf("PLEASE INPUT CARD-NUMBER: ");
	scanf("%d",&n);
	if(n==LandmarkCustomer){
		printf("Welcome K-Bank Customer. Please choose an option\n");
		printf("1. Enter Pin\n");
		printf("2. Enter Bio\n");
		printf("Please pick one: ");
		scanf("%d",&choose);
		if(choose==1){
			while(Try<=max){
			printf("Please Enter Pin: ");
			scanf("%d",&b);
			if(b==PinA){
				printf("Access Granted\n");
				printf("Please Enter amount you want to withdrawl: ");
				scanf("%d",&c);
				subtraction = BalanceA-c;
				if(c<=BalanceA){
					printf("Cashout successful\n");
					printf("Your new balace is:%d",subtraction);
					return 0;
				}else{
					printf("Insufficient Balance.");
					return 0;
				}
			}else{
				printf("Wrong Pin.\n");
				Try++;
				
				if(Try==max){
					printf("Card Captured");
					return 0;
				}
			}
		}
		}else{
			while(Try<=max){
			printf("Please Enter Bio: ");
			scanf("%d",&d);
			if(d==BioA){
				printf("Access Granted\n");
				printf("Please Enter amount you want to withdrawl: ");
				scanf("%d",&c);
				subtraction = BalanceA-c;
				if(c<=BalanceA){
					printf("Cashout successful\n");
					printf("Your new balace is:%d",subtraction);
					return 0;
				}else{
					printf("Insufficient Balance.");
					return 0;
				}
				
			}else{
				printf("Wrong Bio.\n");
				Try++;
				
				if(Try==max){
						printf("Card Captured");
						return 0;
					}
			}
		}
		}
	}else{
		printf("WELCOME OTHER-BANK CUSTOMER.\n");
		while(Try<=max){
		printf("Please Enter Pin: ");
		scanf("%d",&a);
		if(a==PinB){
			printf("Access Granted");
			printf("Enter amount you want to withdrawl: ");
			scanf("%d",&b);
				subtraction = BalanceB-b;
			if(b<=BalanceB){
				printf("Cashout successful.\n");
				printf("Your new balace is:%d",subtraction);
				return 0;
			}
			else {
				printf("Insufficient Balance");
				return 0;
			}	
		}
		else{
					printf("Wrong Pin.\n");
					Try++;
				
				if(Try==max){
						printf("Card Captured");
						return 0;
					}
				}
			}
	}
	return 0;
}
