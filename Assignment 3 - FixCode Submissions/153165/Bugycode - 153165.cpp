// Read code below and try to identify any bug and then fix it. 

// 1. iostream library and standard namespace was missing
#include <iostream>
using namespace std;
int main()
{
	cout << "This program will crash"
		 << endl;

	int nSum;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0;
	while(true)
	{
		// enter another number to add
		int nValue;
		INPUT:
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;
		// 2. Input validation
		if(cin.fail() || cin.get()!='\n')
		{
			cin.clear();
			cin.ignore(99999, '\n');
			cout << "Invalid Input!"<<endl;
			goto INPUT;
		}
		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			// Type casing
			cout << "Average is: "
				 << static_cast<float>(nSum)/nNums
				 << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
		nSum += nValue;
		// Increment nNums
		nNums++;
	}

	cin.ignore(10000, '\n');
	return 0;
}


