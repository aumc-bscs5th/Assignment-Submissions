// Read code below and try to identify any bug and then fix it.
//added the header files

//153188
//Muhammad Sulal Akbar
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
// initialize the sum with the 0
	float nTotal=0.0;
	float nNumbers;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	cout<<"Fixed Program\n\n";
	nNumbers = 0.0;
	while(true)
	{
		// enter another number to add
		label:
		float valueNumber;
		cout << "Please  Enter  number:";cin >> valueNumber;cout << endl;
		while(cin.fail()||cin.get() != '\n') {
			cin.clear();
		cin.clear();
       cin.ignore(256,'\n');
       cout<< "Please re-enter the Number:  "<<endl;
        goto label;
    }

		// if the input number is negative...
		if(valueNumber < 0)
		{
			// ... then output the average
			cout << "Average of Numbers is .....: "<< nTotal/nNumbers<< endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
                nNumbers++;
		nTotal += valueNumber;
	}

	cin.ignore(10000, '\n');
	return 0;
}
