

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st1 = "43.22";

	double st1_double = stod(st1);

	float st1_float = stof(st1);
	
	int st1_int = stoi(st1);

	cout << "Double number = " << st1_double << endl;
	cout << "float number = " << st1_float << endl;
	cout << "integer number = " << st1_int << endl;

	int N1 = 20;
	string N1_str = to_string(N1);
	double N2 = 33.5;
	string N2_str = to_string(N2);
	
	float N3 = 55.23;
	string N3_str = to_string(N3);
	int N3_i = N3;
	int N3_in = (int)N3;
	int N3_int = int(N3);

	cout << "string number 1 = " << N1_str << endl;
	cout << "string number 2 = " << N2_str << endl;
	cout << "float to string = " << N3_str << endl;
	cout << "float to integer1 = " << N3_i << endl;
	cout << "float to integer2 = " << N3_in << endl;
	cout << "float to integer3 = " << N3_int << endl;
}


