
#include <iostream>
#include<string>
using namespace std;

enum enGendar{male,famle};
enum enstatus{married , single};
struct struct_Info
{
    string first_name;
    string last_name;
    short int age;
    string job;
    string city;
    string country;
    int monthly_salary;
    

};
void Read_info(struct_Info & Info)
{
    cout << "please enter your first name?\n";
    cin >> Info.first_name;
    cout << "please enter your last name?\n";
    cin >> Info.last_name;
    cout << "please enter your age?\n";
    cin >> Info.age;
   cout << "please enter your job?\n";
     cin.ignore(1, 'n');
     getline(cin, Info.job);
    cout << "please enter your city?\n";
    cin.ignore(1, 'n');
    getline(cin, Info.city);
    cout << "please enter country ?\n";
    cin.ignore(1, 'n');
    getline(cin, Info.country);
    cout << "please enter your monthly salary?\n";
    cin >> Info.monthly_salary;


    

}
void Print_info(struct_Info Info)
{
    cout << "****************************************************************" << endl;
    cout << "first Name :" << Info.first_name << endl;
    cout << "last Name :" << Info.last_name << endl;
    cout << "age: " << Info.age << endl;
    cout << "job: " << Info.job << endl;
    cout << "country: " << Info.country<< endl;
    cout << "city: " << Info.city << endl;
    cout << "gendar: " << male << endl;
    cout << "maried: " << single << endl;
    cout << "monthly salary: " << Info.monthly_salary << endl;
    cout << "yearly salary: " << Info.monthly_salary*12 << endl;
    cout << "****************************************************************" << endl;

}
int main()
{
    struct_Info person1;
    Read_info(person1);
    Print_info(person1);



}

