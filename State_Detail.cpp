#include<iostream>
using namespace std;

class India
{
	private:
		static string JK;
		static string Himachal_Pradesh;
		static string Panjab;
		static string Uttaranchal;
		static string Haryana;
		static string Delhi;
		static string Rajasthan;
		static string Uttar_Pradesh;
		static string Bihar;
		static string Sikkim;
		static string Arunachal_Pradesh;
		static string Assam;
		static string Nagaland;
		static string Manipur;
		static string Mizoram;
		static string Tripura;
		static string Meghayalaya;
		static string West_Bengal;
		static string Jharkhand;
		static string MP;
		static string Gujarat;
		static string Maharastra;
		static string Chhattisgarh;
		static string Orrisa;
		static string Andhara_Pradesh;
		static string Karnataka;
		static string Goa;
		static string Kelala;
		static string Tamil_Nadu;
		static string Pondicherry;
	public:
		static void Header()
		{
			cout << endl << endl << "----------------------------------------- Indian States Detail ----------------------------------------" << endl << endl ;
			cout << "State Name \t\t Detail\n"
			     << "----------              ---------------------------------------------------------------------------------\n";
			cout << "--------------------------------------------------------------------------------------------------------- \n";
		}
		void ShowData()
		{
			cout << "Jamu & Kashmir\t\t:" << JK << endl
				 <<"Himachal Pradesh\t:" << Himachal_Pradesh << endl
				 <<"Punjab\t\t\t:" << Panjab << endl 
				 <<"Uttaranchal\t\t:" << Uttaranchal << endl
				 <<"Haryana\t\t\t:" << Haryana << endl
				 <<"Delhi\t\t\t:" << Delhi << endl
				 <<"Rajasthan\t\t:" << Rajasthan << endl
				 <<"Uttar Pradesh\t\t:" << Uttar_Pradesh << endl
				 <<"Bihar\t\t\t:" << Bihar << endl
				 <<"Sikkim\t\t\t:" << Sikkim << endl
				 <<"Arunachal Pradesh\t:" << Arunachal_Pradesh << endl
				 <<"Assam\t\t\t:" << Assam << endl
				 <<"Nagaland\t\t:" << Nagaland << endl
				 <<"Manipur\t\t\t:" << Manipur << endl
				 <<"Tripura\t\t\t:" << Tripura << endl
				 <<"Meghayalaya\t\t:" << Meghayalaya << endl
				 <<"West Bengal\t\t:" << West_Bengal << endl
				 <<"Jharkhand\t\t:" << Jharkhand << endl
				 <<"Madhaya Pradesh\t\t:" << MP << endl
				 <<"Gujarat\t\t\t:" << Gujarat << endl
				 <<"Maharastra\t\t:" << Maharastra << endl
				 <<"Chhattisgarh\t\t:" << Chhattisgarh << endl
				 <<"Orrisa\t\t\t:" << Orrisa << endl
				 <<"Andhara Pradesh\t\t:" << Andhara_Pradesh << endl
				 <<"Karnataka\t\t:" << Karnataka << endl
				 <<"Goa\t\t\t:" << Goa << endl
				 <<"Kelala\t\t\t:" << Kelala << endl
				 <<"Tamil Nadu\t\t:" << Tamil_Nadu << endl
				 <<"Pondicherry\t\t:" << Pondicherry << endl;
		}
	
};

string India::JK = "Jammu and Kashmir is a region administered by India as a union territory.";
string India::Himachal_Pradesh = "Himachal Pradesh shares borders with the union territories of Jammu and Kashmir.";
string India::Panjab = "This is the latest accepted revision, reviewed on 26 January 2022.";
string India::Uttaranchal = " More than 75% of Uttaranchal's population consist of rural population.";
string India::Haryana = "Haryana, with 22 districts, is a state in the northern region of India.";
string India::Delhi = "The Government of India and the National Capital Territory of Delhi together administer Delhi.";
string India::Rajasthan = "It covers 342,239 square kilometresor 10.4 percent of India's total geographical area.";
string India::Uttar_Pradesh = "Uttar Pradesh is a land of epics, holy rivers, ancient cities and pilgrimage.";
string India::Bihar = "Bihar is located in the eastern part of the country.";
string India::Sikkim = "Sikkim's economy is largely dependent on agriculture and tourism. ";
string India::Arunachal_Pradesh = "Arunachal Pradesh is an important state in Northeast India.";
string India::Assam = "The Assamese speakers constituted 48% of the State population.";
string India::Nagaland = "Nagaland is one of the northeastern states in India.";
string India::Manipur = "Manipur, state of India, located in the northeastern part of the country.";
string India::Tripura = "Tripura is a landlocked state in North East India.";
string India::Meghayalaya = "Meghalaya is basically an agricultural state with about 80% of its population.";
string India::West_Bengal = "About West Bengal West Bengal is located in the eastern part of India territory.";
string India::Jharkhand = "Jharkhand At a Glance Jharkhand is a state in eastern India.";
string India::MP = "These districts are grouped into ten administrative divisions.";
string India::Gujarat = "Gujarat Is a best State Of India.";
string India::Maharastra = "Maharashtra is divided into 6 divisions and 36 districts.";
string India::Chhattisgarh = "The state of Chhattisgarh was formed by integrating 16 districts.";
string India::Orrisa = "The history of Odisha dates back to many centuries.";
string India::Andhara_Pradesh = "An Indian state, a state of the Republic of India.";
string India::Karnataka = "The economy of Karnataka is the sixth-largest of any Indian.";
string India::Goa = "The state is divided into two districts — North Goa and South Goa.";
string India::Kelala = "Given below is the basic information about the state of Kerala.";
string India::Tamil_Nadu = "Tamil Nadu represents the Tamil -speaking area.";
string India::Pondicherry = "The city is in the Puducherry district on the southeast coast of India.";

int main()
{
	India I;
	India::Header();
	I.ShowData();
}

