

#include <iostream>
using namespace std;
struct str_info
{
    string first_name;
    string last_name;
    int age;
    string phone;
};

void read_info_person1(str_info person[2])
{ 
    cout << "please enter your first name ?\n";
    cin >> person[0].first_name;
    cout << "please enter your last name?\n";
    cin >> person[0].last_name;
    cout << "please enter your age?\n";
    cin >> person[0].age;
    cout << "please entr your phone?\n";
    cin >> person[0].phone;

}

void print_info_person1(str_info person[2])
{
    cout << "*************************************\n";
    cout << "first name:" << person[0].first_name << endl;

    cout << "lastname:" << person[0].last_name << endl;

    cout << "age:" << person[0].age << endl;

    cout << "phone:" << person[0].phone << endl;

    cout << "*************************************\n";
}
void read_info_person2(str_info person[2])
{
    cout << "please enter your first name ?\n";
    cin >> person[1].first_name;
    cout << "please enter your last name?\n";
    cin >> person[1].last_name;
    cout << "please enter your age?\n";
    cin >> person[1].age;
    cout << "please entr your phone?\n";
    cin >> person[1].phone;

}
void print_info_person2(str_info person[2])
{
    cout << "*************************************\n";
    cout << "first name:" << person[1].first_name << endl;

    cout << "lastname:" << person[1].last_name << endl;

    cout << "age:" << person[1].age << endl;

    cout << "phone:" << person[1].phone << endl;

    cout << "*************************************\n";
}
int main()
{
    str_info person[2];
    read_info_person1(person);
    print_info_person1(person);
    read_info_person2(person);
    print_info_person2(person);

   




   
    

}

