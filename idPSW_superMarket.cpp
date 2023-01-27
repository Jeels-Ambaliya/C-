#include<iostream>
using namespace std;

ostream &t(ostream &output)
{
	return output << "\t";
}

class Market
{
	private:
		int Number;
		string Name;
		int Quantity;
		float Tax;
		float Discount;
		
	public:
		void SetData()
		{
			system("CLS");
			cout << "Enter Iteam Number \t: ";
			cin >> Number;
			fflush(stdin);
			cout << "Enter Iteam Name \t: ";
			getline(cin,Name);
			cout << "Enter Iteam Quantity \t: ";
			cin >> Quantity;
			cout << "Enter Iteam Tax \t: ";
			cin >> Tax;
			cout << "Enter Iteam Discount \t: ";
			cin >> Discount;
		}
		static void Header()
		{
			cout << endl << endl << "----------------------------------------- Product Detail ----------------------------------------" << endl << endl ;
			cout << "Number\tName\t\tQuantity\tTax\t\tDiscount\n"
			     << "------- --------------- --------------- --------------- ------------\n";
			cout << "-------------------------------------------------------------------------------------------------- \n";
		}
		void GetData()
		{
			cout << Number << t << Name << t << t << Quantity << t << t << Tax << t << t << Discount << endl;
		}
};

int main()
{
	int N;
	string id , pswd;
	string Id = "jeels";
	string Pswd = "123";
	
	cout << "Enter User Id \t: ";
	cin >> id;
	cout << "Enter Password \t: ";
	cin >> pswd;
	
	if(Id == id && pswd==Pswd)
	{
		system("CLS");
		cout << "How Many Iteam : ";
		cin >> N;
		
		Market M[N];
		
		for(int I=0;I<N;I++)
		{
			M[I].SetData();
		}
		
		Market::Header();
		
		for(int I=0;I<N;I++)
		{
			M[I].GetData();
		}
	}
	else
	{
		cout << endl << "Wrong User Id Or Password..";
	}
	
}

