

#include <iostream>
using namespace std;
struct strinfo 
{ 
    string firstname;
    string lastname;
    int age;
    string phone;
};
void readinfo(strinfo & info)
{
    cout << "please enter your first name ?\n";
    cin >> info.firstname;
    cout << "please enter your last name?\n";
    cin >> info.lastname;
    cout << "please enter your age?\n";
    cin >> info.age;
    cout << "please entr your phone?\n";
    cin >> info.phone;
    cout << "\n\n\n" << endl;
}
void printinfo(strinfo info)
{
    cout << " \n**********************************\n";

    cout << "FirstName: " << info.firstname << endl;
    cout << "LastName: " << info.lastname << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone: " << info.phone << endl;

    cout << "\n**********************************\n";

}
void read_persons_info(strinfo persons[100] ,int & number_of_persons )
{
    cout << "How many persons do you want to enter ? 1 to 100? \n";
    cin >> number_of_persons;

    for (int i = 0; i <= number_of_persons - 1; i++)
    {
        
        cout << " person " << i + 1 << " info:" << endl;
       
        readinfo(persons[i]);
       
    }
}
void print_persons_info(strinfo persons[100],int number_of_persons)
{
    for (int i = 0; i <= number_of_persons -1; i++)
    {
        cout << " person " << i + 1 << " info:" << endl;
        printinfo(persons[i]);
    }
} 
int main()
{
    strinfo persons[100];
    int number_of_persons = 0;
   
    read_persons_info(persons, number_of_persons);
   print_persons_info(persons, number_of_persons);

}

