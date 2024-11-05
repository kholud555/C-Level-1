
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Mystring = "abcdefghijklmnopqrsvtuwxyz";
    cout << "The length of my string = " << Mystring.length() << endl;
    cout << Mystring[0] << endl;
    cout << Mystring[5] << endl;

    string s1 = "10", s2 = "20";
    string s3 = s1 + s2;
    cout << s3 << endl;//will print 1021(concatenation)
     
    int sum = stoi(s1) + stoi(s2);
    cout << sum << endl; // will print 30 

}

