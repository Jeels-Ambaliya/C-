#include<iostream>
using namespace std;

int mtbl(int N)
{
	int i;
	
	for(i=0;i<10;i++)
	{
		cout << N << " " << i+1 << " " << N*(i+1) << endl;
	}

}

int main()
{
	int n;
	
	cout <<"Enter Number : ";
	cin >> n;
	
	mtbl(n);
}
