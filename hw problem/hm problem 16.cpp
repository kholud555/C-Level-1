

#include <iostream>
#include <cmath>
using namespace std;
int rectangle_area(int d, int a)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

int main()
{
    short int d;
     short int a;
    cout << "please enter A ? \n";
    cin >> d;
    cout << "please enter B ? \n";
    cin >> a;
    cout << "Area = " << rectangle_area(d,a) << endl;
    



    return 0;



}

