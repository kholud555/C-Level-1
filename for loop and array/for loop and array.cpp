

#include <iostream>
using namespace std;
void Read_array_data(int Arr1[100], int& length)
{
	cout << "How many numbers do you want to enter ? 1 to 100?\n";
	cin >> length;
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "please enter number" << i + 1 << endl;
		cin >> Arr1[i];
	}
}
void print_array_data(int Arr1[100], int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		cout <<  "(" << i + 1 << ") Number  is "  << Arr1[i] << endl;

	}
}
int calculate_array_data(int Arr1[100], int length)
{
	int sum = 0;
	
	for (int i = 0; i <= length - 1; i++)
	{
		sum += Arr1[i];
	}
	return sum;
}
float Average_of_array(int Arr1[100], int length)
{
	return (float)calculate_array_data( Arr1, length) / length;
}
int main()
{
	int Arr1[100], length = 0;
	Read_array_data(Arr1, length);
	print_array_data(Arr1, length);

	cout << "***********************************************\n";
	cout << " sum = " << calculate_array_data(Arr1, length) << endl;
	cout << "Average = " << Average_of_array(Arr1, length) << endl;

}

