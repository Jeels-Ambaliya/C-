#include<iostream>
using namespace std;

ostream &t(ostream &output)
{
	return output << "\t";
}

class Bank
{
	private :
		char AS;
		int Choice;
		long long int OOP;
		
		string AName;
		long long int AAcc;
		long long int ANumber;
		string AEmail;
		
		float ADeposite;
		float ATransfer;
		float AWithdraw;
		float AAmount = 100000;
		
		string SName;
		long long int SAcc;
		long long int SNumber;
		string SEmail;
	public:
		void First_Screen()
		{
			int D;
			cout << endl << endl 
				 << t << t << t << t << "-:  BANK MANAGMENT SYSTEM  :-" << endl
				 << t << t << t << "----------------------------------------------" << endl
				 << t << t << t << "----------------------------------------------" << endl
				 << endl
				 << t << t << t << t << "-:  Designed & Programed By :-" << endl
				 << t << t << t << "----------------------------------------------" << endl
				 << t << t << t << t << t << "Jeels Ambaliya " << endl
				 << endl << endl
				 << t << t << t << t << t << "-:  Trainer :-" << endl
				 << t << t << t << "----------------------------------------------" << endl
				 << t << t << t << t << t << "Jay Gondaliya " << endl
				 << endl
				 << t << t << t << "Press Any Key & Enter To Continue..." << endl;
				 cin >> D;
		}
		void Second_Screen()
		{
			
			system("CLS");
			cout << "----------------------------------------------------------------" << endl
				 << "-: Press ( A ) to Log In As ADMIN Or ( S ) To Log in As STAFF :-" << endl
				 << "----------------------------------------------------------------" << endl;
				 cin >> AS;
		}
		void Login()
		{
			system("cls");
			if(AS == 'A')
			{
				cout << endl << "---------------------------------------------------------------" << endl
				 	 << t << t << t << t << "-: Welcome As Admin :-" << endl
				 	 << "---------------------------------------------------------------" << endl
				 	 << endl << endl ;
				 
				fflush(stdin);	 
				cout<< t << t << "Enter Name Of Admin \t\t : ";
				getline(cin,AName);
				cout<< t << t << "Enter Account Number Of Admin \t : " ;
				cin >> AAcc;
				cout<< t << t << "Enter Phone Number Of Admin \t : " ;
				cin >> ANumber;
				fflush(stdin);
				cout<< t << t << "Enter Email Id Of Admin \t : ";
				getline(cin,AEmail);
				
				system("CLS");
				
				cout << "--------------------------------------------------------------------------------" << endl
				 << "Name \t\t\t: " << AName << endl
				 << "Account No\t\t: " <<AAcc << endl
				 << "Phone No\t\t: " <<ANumber << endl
				 << "Email-Id\t\t: " <<AEmail << endl
				 << "--------------------------------------------------------------------------------" << endl << endl ;
				 
				 cout << t << t << t << "Press [1] to Deposite The Money :" << endl << endl
				 	  << t << t << t << "Press [2] to Transfer The Money :" << endl << endl	
				 	  << t << t << t << "Press [3] to Withdraw The Money :" << endl << endl;
				 	  
				cin >> Choice;
				
				system("cls");
				
				if(Choice == 1)
				{
					cout << "--------------------------------------------------------------" << endl
						 << t << "Deposite The Money : ";
					cin >> ADeposite;
					cout << "--------------------------------------------------------------" << endl << endl;
					
					cout << t << "Your Actual Amount Is : " << AAmount << endl<< endl;
					cout << t << "Congrates Your Amount Has Deposite Successfully..." << endl << endl;
					cout << t << "Your Account Balance Is : " <<AAmount + ADeposite ;
				}
				else if(Choice == 2)
				{
					cout << "--------------------------------------------------------------" << endl
						 << t << "How Many Money You Transfer : ";
					cin >> ATransfer;
					cout << t << "Account Number Opponent Person : ";
					cin >> OOP;
					cout << "--------------------------------------------------------------" << endl << endl;
					
					cout << t << "Your Actual Amount Is : " << AAmount << endl<< endl;
					cout << t << "Congrates Your Amount Has Transfer Successfully..." << endl << endl;
					cout << t << "Your Account Balance Is : " <<AAmount - ATransfer ;
				}
				else if(Choice == 3)
				{
					cout << "--------------------------------------------------------------" << endl
						 << t << "Withdraw The Money : ";
					cin >> AWithdraw;
					cout << "--------------------------------------------------------------" << endl << endl;
					
					cout << t << "Your Actual Amount Is : " << AAmount << endl<< endl;
					cout << t << "Congrates Your Amount Has Withdraw Successfully..." << endl << endl;
					cout << t << "Your Account Balance Is : " <<AAmount - AWithdraw ;
				}
				else
				{
					cout << "Sorry............!!" << endl;
				}
			}
			else if(AS == 'S')
			{
				cout << endl << "---------------------------------------------------------------" << endl
				 	 << t << t << t << t << "-: Welcome As Staff :-" << endl
				 	 << "---------------------------------------------------------------" << endl
				 	 << endl << endl ;
				 
				fflush(stdin);	 
				cout<< t << t << "Enter Name Of Staff \t\t : ";
				getline(cin,SName);
				cout<< t << t << "Enter Account Number Of Staff \t : " ;
				cin >> SAcc;
				cout<< t << t << "Enter Phone Number Of Staff \t : " ;
				cin >> SNumber;
				fflush(stdin);
				cout<< t << t << "Enter Email Id Of Staff \t : ";
				getline(cin,SEmail);
				
				system("CLS");
				
				cout << "--------------------------------------------------------------------------------" << endl
				 << "Name \t\t\t: " << SName << endl
				 << "Account No\t\t: " << SAcc << endl
				 << "Phone No\t\t: " <<SNumber << endl
				 << "Email-Id\t\t: " <<SEmail << endl
				 << "--------------------------------------------------------------------------------" << endl << endl ;
				 
				 cout << t << t << t << "Press [1] to Deposite The Money :" << endl << endl
				 	  << t << t << t << "Press [2] to Transfer The Money :" << endl << endl	
				 	  << t << t << t << "Press [3] to Withdraw The Money :" << endl << endl;
				 	  
				cin >> Choice; 
				 
				system("cls");
				
				if(Choice == 1)
				{
					cout << "--------------------------------------------------------------" << endl
						 << t << "Deposite The Money : ";
					cin >> ADeposite;
					cout << "--------------------------------------------------------------" << endl << endl;
					
					cout << t << "Your Actual Amount Is : " << AAmount << endl<< endl;
					cout << t << "Congrates Your Amount Has Deposite Successfully..." << endl << endl;
					cout << t << "Your Account Balance Is : " <<AAmount + ADeposite ;
				}
				else if(Choice == 2)
				{
					cout << "--------------------------------------------------------------" << endl
						 << t << "How Many Money You Transfer : ";
					cin >> ATransfer;
					cout << t << "Account Number Opponent Person : ";
					cin >> OOP;
					cout << "--------------------------------------------------------------" << endl << endl;
					
					cout << t << "Your Actual Amount Is : " << AAmount << endl<< endl;
					cout << t << "Congrates Your Amount Has Transfer Successfully..." << endl << endl;
					cout << t << "Your Account Balance Is : " <<AAmount - ATransfer ;
				}
				else if(Choice == 3)
				{
					cout << "--------------------------------------------------------------" << endl
						 << t << "Withdraw The Money : ";
					cin >> AWithdraw;
					cout << "--------------------------------------------------------------" << endl << endl;
					
					cout << t << "Your Actual Amount Is : " << AAmount << endl<< endl;
					cout << t << "Congrates Your Amount Has Withdraw Successfully..." << endl << endl;
					cout << t << "Your Account Balance Is : " <<AAmount - AWithdraw ;
				}
				else
				{
					cout << "Sorry............!!" << endl;
				}
			}
			else
			{
				cout << "Something Wrong Try Again......." << endl ;
			}
		}
};

int main()
{
	Bank B;
	B.First_Screen();
	B.Second_Screen();
	B.Login();
}

