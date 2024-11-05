

#include <iostream>
using namespace std;

void swap_num(int  num1,  int   num2)
{
    int temp;
    temp=num1;
    num1 = num2;
    num2 = temp;
    cout << " num1 after swap will be :" << num1 << " num2 after swap will be:" << num2 << endl;
}

int main()
{
    int num1, num2 , temp;
    cout << "please enter num1?\n";
    cin >> num1;
    cout << "please enter num2?\n";
    cin >> num2;

    swap_num(num1, num2);


}

