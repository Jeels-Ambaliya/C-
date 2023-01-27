#include<iostream>
using namespace std;

class Student 
{
	private:
		int Id = 1;
		string Name = "Jeels Ambaliya";
		
	public:
		Student()
		{
			cout << "Id Is \t\t: " << Id << endl 
				 << "Name Is \t: " << Name << endl;
		}
		~Student() // Distructor
		{
			cout << endl << "THE END" << endl ;
		}
};

int main()
{
	Student S;
}
