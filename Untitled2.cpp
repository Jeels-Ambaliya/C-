#include<iostream>
using namespace std;

class Simple
{
	private:
		char Name[100];
		
	public:
		void Input()
		{
			cout << "Enter Your Name : ";
			cin >> Name;
		}
		void Output()
		{
			cout << endl << "-------------- Detail -----------------" << endl << endl;
			cout << "Your Name Is : " << Name;
		}
};

int main()
{
	Simple S;
	
	S.Input();
	S.Output();
}
