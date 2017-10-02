
//add the header file
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
// initialize the nsum with the 0
	float nSum=0.0;
	float nNums;

	// enter the input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0.0;
	while(true)
	{
		
		label:
		float nValue;
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;
		while(cin.fail()||cin.get() != '\n') {
			cin.clear();
		cin.clear();
       cin.ignore(256,'\n');
       cout<< "Please re-enter:  "<<endl;
        goto label;
    }

		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			cout << "Average is: "
				 << nSum/nNums
				 << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
                nNums++;
		nSum += nValue;
	}

	cin.ignore(10000, '\n');
	return 0;
}