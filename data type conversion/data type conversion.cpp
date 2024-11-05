

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1;
	double num2 = 18.99;

	num1 = num2;//implicit conversion

	num1 = (int)num2;//Explicit conversion 
	num1 = int(num2);// Explicit conversion
	
	


	cout << num1 << endl;

	string str = "123.456";
	
	//convert string to int 
	int num_int = stoi(str);

	// convert string to float 
	float num_float = stof(str);

	//convert string to double 
	double num_double = stod(str);

	cout << num_int  << endl;
	cout << num_float  << endl;
	cout << num_double << endl;

}
