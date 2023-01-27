#include<iostream>
using namespace std;

ostream &t(ostream &output)
{
	return output<< "\t";
}

ostream &n(ostream &output)
{
	return output<< "\n";
}

int main()
{
	int N;
	
	cout << "How Many Number You Want : ";
	cin >> N ;
	
	int A[N], I;
	
	//Enter Value
	cout << n;
	for(I=0;I<N;I++)
	{
		cout << "Enter "<< I+1 <<" Value : ";
		cin >> A[I];
	}
	
	
	//output
	cout << endl << "---------------- Output ------------------"<<n<<n;
	for(I=0;I<N;I++)
	{
		if(A[I]%2==0)
		{
			cout << A[I] << t ;
		}
	}
	
}
