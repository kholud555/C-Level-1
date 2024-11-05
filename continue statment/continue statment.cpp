

#include <iostream>
using namespace std;



int main()
{
	int number;
	int sum = 0;
	

	for (int i = 1; i <= 5; i++)
	{
		cout << " Enter  a number :";
		cin >> number;
		if (50 < number)
		{
			cout << "the number is greater than 50 won't calculate  \n";
			
			continue;
		}
		
		sum += number;
	 }
	cout << sum << endl;
}

