

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = { 10,20,55,10,20 };
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (arr[i] > 50)
        {
            continue;
        }
        sum += arr[i];

    }
    cout << sum << endl;
}

