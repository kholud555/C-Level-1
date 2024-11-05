
#include <iostream>
using namespace std;
int Read_int_number_in_range(int from, int to)
{
	int number_in_range;
	cout << "please enter a number between" << from << "and" << to << endl;
	cin >> number_in_range;

	while (number_in_range < from || number_in_range>to)
	{
		cout << "wrong number,";
		cout << "please enter a number between " << from << " and " << to << endl;
		cin >> number_in_range;	
	}
	
	return number_in_range;
}

int main()
{
	cout << "\n for loop \n";
	// for loop from  1 to 5
	for (int x = 1; x <= 5; x++)
	{
		cout << x << endl;
	}

	cout << "\n while loop \n";
	// for while from 1 to 5
	int i = 1;
	while (i <= 5)
	{
		cout << i << endl;
		i++;
	}

	cout << "--------------\n";

	int Number;
	cout << "please enter positive number\n";
	cin >> Number;

	while (Number < 0)
	{
		cout << " wrong number , please enter a positive number\n";
		cin >> Number;
	}
	cout << "\n the number you entered is :" << Number << endl;

	cout << "-----------------------------\n";
	cout << "the number is :" << Read_int_number_in_range(18, 45) << endl;



}

