#include<iostream>
using namespace std;

ostream &n(ostream &output)
{
	output << "\n";
}

int main()
{
	char Name[100];
	int I;
	 
	cout << "Enter Your Name : ";
	cin >> Name;
	
	//Logic
	cout << endl << "---------------- Output ------------------"<<n<<n;
	for(I=0;I<Name[I] != NULL;I++)
	{
		if(Name[I]>='A' && Name[I]<='Z')
		{
			Name[I] = Name[I] + 32 ;
		}
		else
		{
			Name[I] = Name[I] - 32 ;
		}
	}
	cout << "Name After Toggle Case : " << Name << n ;
	return 0;
}
