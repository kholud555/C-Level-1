

#include <iostream>
#include <string>
using namespace std;

void mysum_procedure()
{
    int num1;
    int num2;
    cout << "please enter number 1\n";
    cin >> num1;
    cout << "please enter number 2\n";
    cin >> num2;
    cout << num1 + num2 << endl;
}

int mysum_function()
{
    int num1;
    int num2;
    cout << "please enter number 1\n";
    cin >> num1;
    cout << "please enter number 2\n";
    cin >> num2;
    return num1 + num2;
    
}

int main()
{
    mysum_procedure();
    cout << mysum_function() << endl;
}

