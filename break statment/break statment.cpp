
#include <iostream>
using namespace std;

int main()
{
    int array[10] = { 10,20,44,55,33,22,99,88,99, 100 };
    int search_for = 99;
 

    for (int i = 0; i <= 10; i++)
    {
        cout << " We are in an iteration : " <<  i+1 << endl;
        if ( array[i] == search_for)
        {
            cout <<  search_for << " found at position " << i << endl;

            break;
        }

        
    }

    

}

