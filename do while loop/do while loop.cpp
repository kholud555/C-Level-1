
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
int Read_int_number_in_range_do_while(int from, int to)
{
	int num;
	do {
		cout << "please enter a number between" << from  << " and " << to << endl;
		cin >> num;
	} while (num < from || num > to);
	return num;
}

int main()
{
	cout << "the number is :" << Read_int_number_in_range(18, 45) << endl;
	cout << "the number is :" << Read_int_number_in_range_do_while(1, 20) << endl;
}
