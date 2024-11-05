
#include <iostream>
using namespace std;
void read_grades(float Grade[3])
{
    cout << "please enter Grade 1\n";
    cin >> Grade[0];
    cout << "please enter Grade 2 \n";
    cin >> Grade[1];
    cout << "please enter Grade 3 \n";
    cin >> Grade[2];
}
float calculate_avg_grades(float Grade[3])
{
    return (Grade[0] + Grade[1] + Grade[2]) / 3;
}
int main()
{
    float Grade[3];
    read_grades(Grade);
    cout << "*******************************************\n";
    cout << "The average of grades are " << calculate_avg_grades (Grade) << endl;

   


















         
}

