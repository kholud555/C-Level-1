

#include <iostream>
using namespace std;
enum enumcountrychoice { Jordan = 1, tunisa = 2, algeria = 3, oman = 4, egypt = 5, iraq = 6, other = 7 };

int main()
{
	cout << "****************************************\n";
	cout << "please enter the number of your country?\n";
	cout << "(1) jordan\n";
	cout << "(2)tunisa\n";
	cout << "(3) algeria\n";
	cout << "(4) oman\n";
	cout << "(5) egypt\n";
	cout << "(6) iraq\n";
	cout << "(7) others\n";
	cout << "****************************************\n";
	cout << "your choice?\n";
	int c;
	enumcountrychoice country;
	cin >> c;
	country = (enumcountrychoice)c;
	if (country == enumcountrychoice::Jordan)
	{
		cout << "your country is jordan\n";
	}
	else if (country == enumcountrychoice::tunisa)
	{
		cout << "your country is tunisa\n";
	}
	else if (country == enumcountrychoice::algeria)
	{
		cout << "your country is algeria \n";
	}
	else if (country == enumcountrychoice::oman)
	{
		cout << "your country is oman\n";
	}
	else if (country == enumcountrychoice::egypt)
	{
		cout << "your country is egypt\n";
	}
	else if (country == enumcountrychoice::iraq)
	{
		cout << "your country is iraq\n";
	}
	else 
	{
		cout << "your country is other\n";
	}
}
