#include<iostream>
using namespace std;

class HighSchool
{
	private:
		int Id;
		static string Name;
		int Roll_No;
		int Std;
		static int Age;
		static long long int Contact_No;
		string School_Name;
		static string Address;
	public:
		void SetData()
		{
			system("CLS");
			cout << "Enter Student Id \t\t: ";
			cin >> Id;
			cout << "Enter Student Roll No \t\t: ";
			cin >> Roll_No;
			cout << "Enter Student Standard \t\t: ";
			cin >> Std;
			fflush(stdin);
			cout << "Enter Student School Name \t: ";
			getline(cin,School_Name);	
		}
		void GetData()
		{
			cout << endl << endl << "------------- Student HighInformation -------------------" << endl ;
			cout << endl << "Student Id Is \t\t: " << Id << endl 
				 << "Student Name Is \t: " << Name << endl
				 << "Student Roll No Is \t: " << Roll_No << endl
				 << "Student Standard Is \t: " << Std << endl
				 << "Student Age Is \t\t: " << Age << endl
				 << "Student Contact No Is \t: " << Contact_No << endl
				 << "Student School Name Is \t: " << School_Name << endl
				 << "Student Address Is \t: " << Address << endl;
		}
};

string HighSchool::Name = "Jeels Ambaliya";
int HighSchool::Age = 20;
long long int HighSchool::Contact_No = 9722290599;
string HighSchool::Address = "Surat";

class College
{
	private:
		int Id;
		static string Name;
		int Enro_No;
		int Sem;
		static int Age;
		static long long int Contact_No;
		string Institute_Name;
		static string Address;
	public:
		void SetData()
		{
			system("CLS");
			cout << "Enter Student Id \t\t: ";
			cin >> Id;
			cout << "Enter Student Enrollement No \t: ";
			cin >>Enro_No;
			cout << "Enter Student Semester \t\t: ";
			cin >> Sem;
			fflush(stdin);
			cout << "Enter Student Institute Name \t: ";
			getline(cin,Institute_Name);	
		}
		void GetData()
		{
			cout << endl << endl << "------------- Student College Information -------------------" << endl ;
			cout << endl << "Student Id Is \t\t\t: " << Id << endl 
				 << "Student Name Is \t\t: " << Name << endl
				 << "Student Enro No Is \t\t: " << Enro_No << endl
				 << "Student Semester Is \t\t: " << Sem << endl
				 << "Student Age Is \t\t\t: " << Age << endl
				 << "Student Contact No Is \t\t: " << Contact_No << endl
				 << "Student Institute Name Is \t: " << Institute_Name << endl
				 << "Student Address Is \t\t: " << Address << endl;
		}
};

string College::Name = "Jeels Ambaliya";
int College::Age = 20;
long long int College::Contact_No = 9722290599;
string College::Address = "Surat";

int main()
{
	int Choice;
	
	cout << "Press 1 To HighSchool." << endl
		 << "Press 2 To College." << endl;
		 
	cout << endl << "Enter Your Choice : ";
	cin >> Choice;
	
	if(Choice == 1)
	{
		HighSchool H;
		H.SetData();
		H.GetData();
	}
	else if(Choice == 2)
	{
		College C;
		C.SetData();
		C.GetData();
	}
	else
	{
		cout << "Sorry........!!" << endl ;
	}
}
