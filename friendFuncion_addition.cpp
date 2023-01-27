#include<iostream>
using namespace std;

class Two;

class One
{
	private:
		int Number;
	public:
		void SetData()
		{
			cout << "Enter One Number : ";
			cin >> Number;
		}
		friend void Addition(One O,Two T);
};

class Two
{
	private:
		int Number;
	public:
		void SetData()
		{
			cout << "Enter Two Number : ";
			cin >> Number;
		}
		friend void Addition(One O,Two T);
};

void Addition(One O,Two T)
{
	O.SetData();
	T.SetData();
	
	Sum = O.Number + T.Number;
	
	cout << endl << endl << "Addition Is : " << Sum << endl ;
}

int main()
{
	One O;
	Two T;
	
	Addition(O,T);
} 
