#include<iostream>

using namespace std;
int main(){
	//C program for ATM machine
	int LandmarkCustomer = 10001;
	int NonLandmarkCustomer = 11000;
	int PinA = 20056;
	int BioA = 20057;
	int PinB = 10101;
	int BalanceA = 500000;
	int BalanceB = 400000;
	int Try = 0;
	int max = 3;
	int n;
	int choose;
	int a, b, c, d, subtraction = 0;
	
	cout<<"..........WELCOME TO THE K-BANK ATM MACHINE.........."<<endl;
	cout<<"PLEASE INPUT CARD: ";
	cin>>n;
	if(n==LandmarkCustomer){
		cout<<"Welcome K-Bank Customer. Please pick one of the options below"<<endl;
		cout<<"1. Enter Pin"<<endl;
		cout<<"2. Enter Bio"<<endl;
		cout<<"Please pick one: ";
		cin>>choose;
		if(choose==1){
			while(Try<=max){
			cout<<"Please Enter Pin: ";
			cin>>b;
			if(b==PinA){
				cout<<"Access Granted\n"<<endl;
				cout<<"Please Enter amount you want to withdrawl: ";
				cin>>c;
				subtraction = BalanceA-c;
				if(c<=BalanceA){
					cout<<"Cashout successful"<<endl;
					cout<<"Your new balace is:"<<subtraction<<endl;
					return 0;
				}else{
					cout<<"Insufficient Balance.";
					return 0;
				}
			}else{
				cout<<"Wrong Pin.Please try again:  "<<endl;
				Try++;
				
				if(Try==max){
					cout<<"Card Captured"<<endl;
					return 0;
				}
			}
		}
		}else{
			while(Try<=max){
			cout<<"Enter Bio: ";
			cin>>b;
			if(b==BioA){
				cout<<"Access Granted"<<endl;
				cout<<"Please Enter amount you want to withdrawl: ";
				cin>>c;
				subtraction = BalanceA-c;
				if(c<=BalanceA){
					cout<<"Cashout successful"<<endl;
					cout<<"Your new balace is:"<<subtraction<<endl;
					return 0;
				}else{
					cout<<"Insufficient Balance."<<endl;
					return 0;
				}
				
			}else{
				cout<<"Wrong Bio. Please try again"<<endl;
				Try++;
				
				if(Try==max){
						cout<<"Card Captured"<<endl;
						return 0;
					}
			}
		}
		}
	}else{
		while(Try<=max){// looping condtion for wrong pin for other bank customers
			cout<<"WELCOME OTHER-BANK CUSTOMER"<<endl;
		cout<<"Enter Pin: ";
		cin>>a;
		if(a==PinB){
			cout<<"Access Granted"<<endl;
			cout<<"Enter amount you want to withdrawl: ";
			cin>>b;
				subtraction = BalanceB-b;
			if(b<=BalanceB){
				cout<<"Cashout successful."<<endl;
				cout<<"Your new balace is:"<<subtraction<<endl;
				return 0;
			}
			else {
				cout<<"Insufficient Balance"<<endl;
				return 0;
			}	
		}
		else{
					cout<<"Wrong Pin. Please try again: "<<endl;
					Try++;
					
					if(Try==max){//if condition for when number of try is equal to max attemps
						cout<<"Card Captured"<<endl;
						return 0;
					}
				}
			}
	}
	return 0;
}
