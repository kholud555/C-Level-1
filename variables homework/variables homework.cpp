
#include <iostream>
using namespace std;

int main()
{
    string Name;
    short int Age;
    string city ;
    string country ;
    float Monthly_salary ;
    char Gender ;
    bool isMaried ;
   
    cout << "please enter your ." << endl;
    cin >> Name;

    cout << "please enter your Age." << endl;
    cin >> Age;

    cout << "please enter your city." << endl;
    cin >> city;

    cout << "please enter your country." << endl;
    cin >> country;

    cout << "please enter your monthlt salary." << endl;
    cin >> Monthly_salary;

    cout << "please enter your Gender F/M?" << endl;
    cin >> Gender;

    cout << "DO you Maried ? 1/0" << endl;
    cin >> isMaried;


    cout << "****************************************************************" << endl;
    cout << "Name :" << Name << endl;
    cout << "Age :" << Age << endl;
    cout << "city :" << city << endl;
    cout << "country :" << country << endl; 
    cout << "Nonthly salary :" << Monthly_salary << endl;
    cout << "yearly salary :" << Monthly_salary * 12 << endl;
    cout << "Gender :" << Gender << endl; 
    cout << "Maried :" << isMaried << endl; 
    cout << "****************************************************************" << endl;

 
    
   












}

