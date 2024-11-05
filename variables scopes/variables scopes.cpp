

#include <iostream>
using namespace std;
int x = 300;
void myfunction() 
{
    int x = 10;
    cout << "the value of x inside x function is :" << x << endl;
}

int main()
{
    int x = 50;
    cout << "the local value of x inside main is :" << x << endl;
    myfunction();

    ::x=7000;
    cout << "the global of x is :" << ::x << endl;
        
}

