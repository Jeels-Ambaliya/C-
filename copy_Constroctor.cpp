#include <iostream>
using namespace std;

class A
{
	private:
		int x, y;

	public:
    A()
    {
        cout << "Default constructor called!";
    }
    A(int a, int b)
    {
        cout << "Parametrized Constructor called!\n";
        x = a;
        y = b;
    }
    A(A &old)
    {
        x = old.x;
        y = old.y;

        cout << endl << "Copy Constructor called!\n" << endl;
    }

    void print()
    {
        cout << "X = " << x << endl
			 << "Y = " << y << endl;
    }
};

int main()
{
    A obj(10, 20); 
    A obj2(obj);   
    obj2.print();
}
