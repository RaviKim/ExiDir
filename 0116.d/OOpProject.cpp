#include <iostream>
#include <cstring>


using namespace std;
const int Name_Len = 20;// permission name's length is 20. 

void ShowMenu(void);
void MakeAccount(void);
void Deposit(void);
void WithDrawal(void);
void ShowAccountAll(void);

enum {MAKE=1, deposit, withdrawal, showaccountall, exit};// set switch case 


typedef struct{
int accessID;	//Account ID info.
int Money;	// Money.
char cusName[Name_Len];	//	customer's name.
} Account;

Account accArr[10];
int accCnt=0; // Save Account number


int main(void){
int checkMenuNumber;

while(1){

	ShowMenu();
	cout << "Your Check Number is : ";
	cin >> checkMenuNumber;
	cout << endl;

	switch(checkMenuNumber){

		case MAKE:
			MakeAccount();
			break;

		case deposit:
			Deposit();
			break;

		case withdrawal:
			WithDrawal();
			break;

		case showaccountall:
			ShowAccountAll();
			break;

		case exit:
//			cout << "Exit Accout Program";
			return 0;

		default:
			cout <<"You need Input Right Number. Please check again!";

}							
}
return 0;
}

void ShowMenu(void){	
	cout<<"Check Menu Number----------------"<<endl<<endl; 
	cout<<" 1 : Make Account\n ";
	cout<<" 2 : DePosit\n ";
	cout<<" 3 : WithDrawal\n ";
	cout<<" 4 : ShowAccountAll\n ";
	cout<<" 5 : Exit Menu\n ";
	cout<<"-----------------------------------"<<endl;
}

void MakeAccount(void){
	int id;
	char Name[Name_Len];
	int DepositMoney;

	cout<<"[ Make Account Menu ]"<<endl;
	cout<<"Account Info : ";
	cin>>id;
	cout<<"Account Name : ";
	cin>>Name;
	cout<<"Deposit Money: ";
	cin>>DepositMoney;
	cout<<endl;
	
	accArr[accCnt].accessID = id;
	accArr[accCnt].Money = DepositMoney;
	strcpy(accArr[accCnt].cusName, Name);
	accCnt++; // saved information conunt up

}

void Deposit(void){
	int id;
	int depositMoney;

	cout<< "[ Deposit ]" <<endl;
	cout<< "Account ID : ]";
	cin >> id;
	cout<< "Deposit Money : ";
	cin >> depositMoney;

	for(int i = 0; i<accCnt; i++){
		if(accArr[i].accessID == id) {	// matching saved access ID
			accArr[i].Money += depositMoney;
			cout <<" Deposit Process is Complete" << endl;
		}
		cout<<"There is no Id information" << endl << endl;
	}
}

void WithDrawal(void){
	int id;
	int withdrawalmoney;

	cout << "[ WithDrawal ]"<< endl;
	cout << "Account ID : " ;
	cin >> id;
	cout << "withDrawal Money : ";
	cin >> withdrawalmoney;

	for (int i = 0; i< accCnt; i++){
		if(accArr[i].accessID == id){

			if(accArr[i].Money < withdrawalmoney){
				cout << "Empty Account!"<<endl<<endl;
				return;
			}
			accArr[i].Money -= withdrawalmoney;
			cout << " WithDrawal Process is Complete"<< endl;
			return;
		}
	}
	cout << "There is no Id information" << endl << endl;
}

void ShowAccountAll(void){
	for(int i = 0; i < accCnt; i++){
		cout << "AccountID : " << accArr[i].accessID << endl;
		cout << "Name : " << accArr[i].cusName << endl;
		cout << "Money : " << accArr[i].Money << endl << endl;
	}
}
