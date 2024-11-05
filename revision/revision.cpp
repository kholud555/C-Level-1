
#include <iostream>
using namespace std;

struct student_personal_info
{
    string hobby;
    string sports;
    string favariout_subject;

};
struct parent_info
{
    string name;
    string adress;
    int phone;
    string job;

    
};
struct studentinfo
{
    string name;
    int  classes;
    bool gendar;
    int  level;
    parent_info parent;
    student_personal_info personal;



};

int main()
{
    studentinfo student1,student2;


    cout << "what is your name ?\n";
    cin >> student1.name;

    cout << "what is your name ?\n";
    cin >> student1.parent.name;


}

