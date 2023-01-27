#include<iostream>
using namespace std;

class Student 
{
	private:
		
	public:
		Student(int Id, string Name)
		{
			cout << "Id Is \t\t: " << Id << endl 
				 << "Name Is \t: " << Name << endl;
		}
};

int main()
{ 
	Student S(1,"Jeel's");
}
