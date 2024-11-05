

#include <iostream>
#include<string>
using namespace std;
enum engendar { famel,male };
enum enstatus {single,maried};
enum encolor {red,green,blue,orange};
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

    enstatus status;
    engendar gendar;
    encolor favouratecolor;


    
    
    
    

};

int main()
{
    stperson person1;

    cout << "please enter your first name?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.firstname);

    cout << "please enter your last name?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.lastname);
    cout << "please enter your age ?\n";
    cin >>person1.age ;
    cout << "please enter your E_mail?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.contantinfo.email);
    cout << "please entesr your phone number?\n";
    cin >> person1.contantinfo. phonenum;
    cout << "please enter your job?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.job);
    cout << "please enter your major?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.major);
    cout << "please enter your country?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.adress.country);
    cout << "please enter your city?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.adress.city);
    cout << "please enter your street?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.adress.street);
    cout << "please enter your building ?\n";
    cin.ignore(1, 'n');
    getline(cin, person1.adress.street);
    cout << "please enter your flat number?\n";
    cin >> person1.contantinfo.adress.flat_number;  
    cout << "please enter your monthly salary ?  \n";
    cin >> person1.personalinfo.monthly_salary;
    cout << "please enter your yearly salary ?  \n";
    cin >> person1.personalinfo.yearly_salary;
  

    cout << "****************************************************************" << endl;
    cout << "first Name :" << person1.firstname << endl;
    cout << "last Name :" << person1.lastname << endl;
    cout << "age: " << person1.age << endl;
    cout << "job: " << person1.job << endl;
    cout << "major: " << person1.major << endl;
    cout << "E_mail: " << person1.contantinfo.email << endl;
    cout << "phone number: " << person1.contantinfo.phonenum << endl; 
    cout << "country: " << person1.contantinfo.adress.country << endl;
    cout << "city: " << person1.contantinfo.adress.city << endl;
    cout << "street: " << person1.contantinfo.adress.street << endl;
    cout << "building: " << person1.contantinfo.adress.building << endl;
    cout << "flat number: " << person1.contantinfo.adress.flat_number << endl;
    cout << "gendar: " << male << endl;
    cout << "maried: " << single << endl;
    cout << "favourite color :" << orange << endl;
    cout << "monthly salary: " << person1.personalinfo.monthly_salary << endl;
    cout << "yearly salary: " << person1.personalinfo.yearly_salary << endl;
    cout << "****************************************************************" << endl;
   
    
    














}

