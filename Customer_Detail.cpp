#include<iostream>
using namespace std;

class Customer
{
	private:
		int Cust_Id;
		string Cust_Name;
		int Cust_Age;
		string Cust_Telecome_Brand_Name;
		long long int Cust_Numeber;
		string Cust_City;
		int Cust_Sim_Validity;
		
	public:
		void SetData()
		{
			cout << endl << "Enter Customer Id \t\t\t: "; 
			cin >> Cust_Id;
			fflush(stdin);
			cout << "Enter Customer Name \t\t\t: ";
			getline(cin,Cust_Name);
			cout << "Enter Customer Age \t\t\t: ";
			cin >> Cust_Age;
			fflush(stdin);
			cout << "Enter Customer Telecome Brand Name \t: ";
			getline(cin,Cust_Telecome_Brand_Name);
			cout << "Enter Customer Mobile Number \t\t: ";
			cin >> Cust_Numeber;
			fflush(stdin);
			cout << "Enter Customer City \t\t\t: ";
			getline(cin,Cust_City);
			cout << "Enter Customer Sim Validation Year \t: ";
			cin >> Cust_Sim_Validity;
		}
		void GetData()
		{
			cout << endl << "Customer ID Is \t\t\t\t: " << Cust_Id << endl ;
			cout << "Customer Name Is \t\t\t: " << Cust_Name << endl ;
			cout << "Customer Age Is  \t\t\t: " << Cust_Age << endl ;
			cout << "Customer Telecome Brand Is \t\t: " << Cust_Telecome_Brand_Name << endl ;
			cout << "Customer Mobile Number Is \t\t: " << Cust_Numeber << endl ;
			cout << "Customer City Is \t\t\t: " << Cust_City << endl ;
			cout << "Customer Sim Validation In Year Is \t: " << Cust_Sim_Validity << endl ;
		}
};

int main()
{
	Customer C[5];
	
	for(int I=0;I<5;I++)
	{
		C[I].SetData();
	}
	
	cout << endl << "--------------- Customer Detail -------------------" << endl << endl;
	
	for(int I=0;I<5;I++)
	{
		C[I].GetData();
	}
}