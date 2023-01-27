#include<iostream>
using namespace std;

ostream &t(ostream &output)
{
	return output << "\t";
}

class Railway
{
	private:
		int Number;
		string Name;
		string Source;
		string Destination;
		string Time;
		
	public:
		void SetData()
		{
			cout << endl << "Enter Train Number \t: " ;
			cin >> Number;
			fflush(stdin);
			cout << "Enter Train Name \t: ";
			getline(cin,Name);
			cout << "Enter Train Source \t: ";
			getline(cin,Source);
			cout << "Enter Train Destination : ";
			getline(cin,Destination);
			cout << "Enter Train Time \t: ";
			getline(cin,Time);
		}
		static void Header()
		{
			cout << endl << endl << "----------------------------------------- Railway Detail ----------------------------------------" << endl << endl ;
			cout << "Number\tName\t\tSource\t\tDestination\tTime\n"
			     << "------- --------------- --------------- --------------- ------------\n";
			cout << "-------------------------------------------------------------------------------------------------- \n";
		}
		void GetData(int N)
		{
			if(Number == N)
			{
				cout << Number << t << Name << t << t << Source << t << t << Destination << t << t << Time << endl ;
			}
		}
};

int main()
{
	int N;
	Railway R[3];
	
	for(int I=0;I<3;I++)
	{
		R[I].SetData();
	}

	system("cls");
	cout << endl << "Enter Train Number You Want Show Data : ";
	cin >> N;
	
	Railway::Header();
	
	for(int I=0;I<3;I++)
	{
		R[I].GetData(N);
	}
	
}
