#include<iostream>
using namespace std;

class House
{
	private:
		int H_Room;
		char R_Color[100];
		char R_Type[100];
		char H_Color[100];
		int H_Floor;
		
	public:
		void Input()
		{
			cout << "Enter House Color : ";
			cin >> H_Color;
			cout << "Enter Room Type : ";
			cin >> R_Type;
			cout << "Enter Room Color : ";
			cin >> R_Color;
			cout << "Enter How Many Room In House : ";
			cin >> H_Room;
			cout << "Enter How Many Floor In House : ";
			cin >> H_Floor;
		}	
		void Output()
		{
			cout << endl << "-------------- House Detail -----------------" << endl << endl;
			cout << "House Floor \t: " << H_Floor << endl;
			cout << "House Room \t: " << H_Room << endl;
			cout << "House Color \t: " << H_Color << endl;
			cout << "Room Type \t: " << R_Type << endl;
			cout << "Room Color \t: " << R_Color << endl;
		}
};

int main()
{
	House H;
	
	H.Input();
	H.Output();
}
