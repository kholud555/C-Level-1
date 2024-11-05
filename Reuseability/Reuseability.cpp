

#include <iostream>
#include <string>
using namespace std;
struct stpersonal_info
{
    int monthly_salary;
    int yearly_salary;
};


struct staddress
{
    string country;
    string city;
    string street;
    int building;
    int flat_number;

};

struct stcontant_info
{
    int phonenum;
    string email;
    staddress adress;
};
struct stperson
{
    string firstname;
    string lastname;
    int  age;
    string job;
    string major;

    stcontant_info contantinfo;

    stpersonal_info personalinfo;

    staddress adress;

};
void Readinfo(stperson &info)
{
     cout << "please enter your first name?\n";
    cin.ignore(1, '\n');
    getline(cin, info.firstname);

    cout << "please enter your last name?\n";
    cin.ignore(1, '\n');
    getline(cin, info.lastname);
    cout << "please enter your age ?\n";
    cin >>info.age ;
    cout << "please enter your E_mail?\n";
    cin.ignore(1, '\n');
    getline(cin, info.contantinfo.email);
    cout << "please entesr your phone number?\n";
    cin >> info.contantinfo. phonenum;
    cout << "please enter your job?\n";
    cin.ignore(1, '\n');
    getline(cin, info.job);
    cout << "please enter your major?\n";
    cin.ignore(1, '\n');
    getline(cin, info.major);
    cout << "please enter your country?\n";
    cin.ignore(1, '\n');
    getline(cin,info .adress.country);
    cout << "please enter your city?\n";
    cin.ignore(1, '\n');
    getline(cin, info.adress.city);
    cout << "please enter your street?\n";
    cin.ignore(1, '\n');
    getline(cin, info.adress.street);
    cout << "please enter your building ?\n";
    cin.ignore(1, '\n');
    getline(cin, info.adress.street);
    cout << "please enter your flat number?\n";
    cin >> info.contantinfo.adress.flat_number;  
    cout << "please enter your monthly salary ?  \n";
    cin >> info.personalinfo.monthly_salary;
    cout << "please enter your yearly salary ?  \n";
    cin >> info.personalinfo.yearly_salary;
  
}
void printinfo(stperson info)
{
    cout << "****************************************************************" << endl;
    cout << "first Name :" << info.firstname << endl;
    cout << "last Name :" << info.lastname << endl;
    cout << "age: " <<info.age << endl;
    cout << "job: " <<info.job << endl;
    cout << "major: " << info.major << endl;
    cout << "E_mail: " << info.contantinfo.email << endl;
    cout << "phone number: " << info.contantinfo.phonenum << endl;
    cout << "country: " << info.contantinfo.adress.country << endl;
    cout << "city: " << info.contantinfo.adress.city << endl;
    cout << "street: " << info.contantinfo.adress.street << endl;
    cout << "building: " << info.contantinfo.adress.building << endl;
    cout << "flat number: " << info.contantinfo.adress.flat_number << endl;
    
    cout << "monthly salary: " << info.personalinfo.monthly_salary << endl;
    cout << "yearly salary: " << info.personalinfo.yearly_salary << endl;
    cout << "****************************************************************" << endl;



}

int main()
{
   
    stperson person1;
   
    Readinfo(person1);
    printinfo(person1);

}

