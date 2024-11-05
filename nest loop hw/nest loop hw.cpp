

#include <iostream>
using namespace std;

int main()
{
    for (char i = 65; i <= 90; ++i)
    { 
        cout << "letter:" << char( i) << endl;
        for (char t = 65; t <= 90; ++t)
        {
            cout << char (i) << char (t) << endl;
        }
        cout << "------------------------\n";
    }
    cout << "\n\n";
    for (int y = 10; y >= 1; --y)
    {
        for (int v = 1; v <= y; ++v)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n\n";

    for (int c = 10; c >= 1; --c)
    {
        for (int d = 1; d <= c; ++d)
        {
            cout << d << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

        for (int x = 1; x <= 10; x++)
        {
            for (int a = 1; a <= x; a++)

            {
                cout << a << " ";
            }
            cout << "\n";
         }
        cout << "\n\n";

        for (char l = 65; l <= 70; ++l)
        {
            for (char b = 65; b <= l; ++b)
            {
                cout << char (b) << " ";
            }
            cout << "\n";
        }
        cout << "\n\n";
        for (int w = 1; w <= 10; w++)
        {
            for (int q = w;  q <= 10; q++)
            {
                cout << q ;
            }
            cout << "\n";
        }
    
    
}


