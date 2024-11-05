

#include <iostream>
using namespace std;

int main()
{
    short int A;
    short int B;
    
    cout << "please enter A?\n";
    cin >> A;
    cout << "please enter B?\n";
    cin >> B;

    cout << A << " = " << B << " is " << (A == B) << endl;
    cout << A << " != " << B << " is " << (A != B) << endl;
    cout << A << " < " << B << "is " << (A < B) << endl;
    cout << A << " > " << B << "is " << (A > B) << endl;
    cout << A << " <= " << B << "is " << (A <= B) << endl;
    cout << A << " >= " << B << "is " << (A >= B) << endl;

}

