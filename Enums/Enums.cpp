

#include <iostream>
using namespace std;
enum color{Red,Green,Blue,Yellow};

int main()
{
    color favourite_color;
    favourite_color = color::Green;
    cout << "My favourite color is :" << favourite_color << endl;
}

