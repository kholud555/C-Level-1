

#include <iostream>
using namespace std;

int main()
{
	short int A = 10;
	short int B = A++;

	cout << "B = " << B << endl;
	cout << "A = " << A << endl; 

	B = ++A;
	cout << "B = " << B << endl;
	cout << "A = " << A << endl;
	short int D = 10, H = 20;
	D += H;
	cout << "D = " << D << endl;

	D -= H;
	cout << "D = " << D << endl;

}

