#include <iostream>
#include <string.h>
using namespace std;

class person{
	private:
		char name[30];
		int age;
	
	public:
		//default constructor 
		person()
		{
			strcpy(name,"None");
			age = 0;
		}
		//parameterized constructor 
		person(char n[], int a)
		{
			strcpy(name, n);
			age = a;
		}
		//copy constructor 
		person(person &p)
		{
			strcpy(name, p.name);
			age =p.age;
		}
		//function to display person details 
		void print(void)
		{
			cout<<name<<" is "<<age<<" years old."<<endl;
		}
};

int main()
{
	person p1; 
	person p2("Jeels Ambaliya",20); 
	person p3(p2); 
	
	cout<<"Defalut..."<<endl;                                                                                                      
	p1.print();
	cout<< endl << "Parameterized..."<<endl;
	p2.print();	
	cout<< endl << "Copy..."<<endl;
	p3.print();	
	
}
