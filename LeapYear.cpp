#include<iostream>
using namespace std;

ostream &n(ostream &output)
{
	output << "\n";
}

int main()
{
	int I , A[500] , B = 2020 ;
	
	for(I=2020;I<=3030;I++)
	{
		if (I % 4 == 0 ) 
		{
    		A[I-B] = I;
    		B = B + 3 ;
 		}	
	}
	
	for(I=0;I<253;I++)
	{
		cout<<"A[" << I << "]:" << A[I] << n;
	}
	
	return 0;
}
