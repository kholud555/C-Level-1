

#include <iostream>
using namespace std;

void mysum()
{
    int Number1;
    int Number2;

    cout << "please enter Number1?\n";
    cin >> Number1;
    cout << "please enter Number2\n";
    cin >> Number2;
    cout << "**************************\n";
    cout << Number1 + Number2;
}

 int mysum_function()
{
     int Number1;
     int Number2;

     cout << "please enter Number1?\n";
     cin >> Number1;
     cout << "please enter Number2\n";
     cin >> Number2;
     cout << "**************************\n";
     return Number1 + Number2;
}

int main()
{
    //mysum();
    cout << mysum_function() << endl;
}

