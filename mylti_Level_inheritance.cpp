#include<iostream> 
using namespace std;

class Emp_A
{
	protected:
		int Id;
		string Name;
		string Role;
		double Salary;
		int Experience;
		string Cmp_Name;
		string Address;
		string Email;
		long long int Contact;
		
	public:
		void SetData()
		{
			cout << "Enter Employee Id \t\t: ";
			cin >> Id;
			fflush(stdin);
			cout << "Enter Employee Name \t\t: ";
			getline(cin,Name);
			cout << "Enter Employee Role \t\t: ";
			getline(cin,Role);
		}
};

class Emp_B : public Emp_A
{
	public:
		void SetData()
		{
			cout << "Enter Employee Salary \t\t: ";
			cin >> Salary;
			cout << "Enter Employee Experience Year \t: ";
			cin >> Experience;
		}
};

class Emp_C : public Emp_B
{
	public:
		void SetData()
		{
			cout << "----------------------- Again Input --------------------------" << endl ;
			fflush(stdin);
			cout << "Enter Company Name \t\t: ";
			getline(cin,Cmp_Name);
			cout << "Enter Employee Address \t\t: ";
			getline(cin,Address);
		}
		void GetData()
		{	
			cout << endl << endl << "--------------------- Output -------------------" << endl ;
			cout << "Employee Name \t\t : " << Name << endl;
			cout << "Employee Role \t\t : " << Role << endl;
			cout << "Employee Salary \t : " << Salary << endl << endl << endl;
		}
};

class Emp_D : public Emp_C
{
	public:
		void SetData()
		{
			cout << "Enter Employee Email Id \t: ";
			getline(cin,Email);
			cout << "Enter Employee Contact NO \t: ";
			cin >> Contact;
		}
		void GetData()
		{
			cout << endl << endl << "--------------------Final Output ---------------------------" << endl
								 << "------------------------------------------------------------" << endl
								 << "Employee Id \t\t : " << Id << endl
								 << "Employee Name \t\t : " << Name << endl
								 << "Employee Role \t\t : " << Role << endl
								 << "Employee Salary \t : " << Salary << endl
								 << "Employee Experience Year : " << Experience << endl
								 << "Company Name \t\t : " << Cmp_Name << endl
								 << "Employee Address \t : " << Address << endl
								 << "Employee Email Id \t : " << Email << endl
								 << "Employee Contact No \t : " << Contact << endl;
		}
};

int main()
{
	Emp_D e;
	
	e.Emp_A::SetData();
	e.Emp_B::SetData();
	e.Emp_C::GetData();	
	e.Emp_C::SetData();
	e.Emp_D::SetData();
	e.Emp_D::GetData();
}
