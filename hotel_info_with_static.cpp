#include<iostream>
using namespace std;

ostream &t(ostream &output)
{
	return output << "\t";
}

class Hotel 
{
	private:
		int Id;
		string Name;
		string Type;
		int Rating;
		static string Location;
		static int Establish_Year;
		int Staff_Quantity;
		int Room_Quantity;

	public:
		void GetData(int N , int I)
		{
			
			cout << endl << "(" << I+1 << "/" << N << ")\n";
 			cout << "Enter Hotel Id : ";
			cin >> Id;
			fflush(stdin);
			cout << "Enter Hotel Name : ";
			getline(cin,Name);
			cout << "Enter Hotel Type : ";
			getline(cin,Type);
			cout << "Enter Hotel Rating : ";
			cin >> Rating;
			cout << "Enter Hotel Staff Quantity : ";
			cin >> Staff_Quantity;
			cout << "Enter Hotel Room Quantity : ";
			cin >> Room_Quantity;
		}
		static void Header()
		{
			cout << endl << endl << "----------------------------------------- King Hotel ----------------------------------------" << endl << endl ;
			cout << "Id\tName\tType\tRating\tLocation\tEstablish Year\tStaff Quantity\tRoom Quantity\n"
			     << "------- ------- ------- ------- --------        --------------  --------------  -------------\n";
			cout << "--------------------------------------------------------------------------------------------- \n";
		}
		void DisplayData()
		{
			cout << Id << t << Name << t << Type << t << Rating << t << Location 
			<< t << t << Establish_Year << t << t << Staff_Quantity << t << t << Room_Quantity 
			<< endl ; 
		}
		
};

string Hotel::Location = "Surat";
int Hotel::Establish_Year = 2019;

int main()
{
	int N;
	
	cout << "How Many Hotel You Want : ";
	cin >> N;
	
	Hotel H[N];
	
	for(int I=0;I<N;I++)
	{
		system("cls");
		H[I].GetData(N,I);
	}
	
	Hotel::Header();
	
	for(int I=0;I<N;I++)
	{
		H[I].DisplayData();
	}
	
}

