// Read code below and try to identify any bug and then fix it.
//FIX : include headerfile 'iostream'
//FIX : Added 'using namespace std
//Fix conio.h is a C++ header file used to provide console input/output
//added the header files
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
	nNumbers = 0.0;
	while(true)
	{
		// enter another number to add
		label:
		float nValue;
		cout << "Plz Enter Another number:        "   <<endl;
		cin >> nValue;
		cout << endl;
		while(cin.fail()||cin.get() != '\n') {
			cin.clear();
		cin.clear();
       cin.ignore(256,'\n');
       cout<< "Please re-enter the nuumber:       "<<endl;
        goto label;
    }

		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			cout << "The Number Avg is: "
				 << nTotal/nNumbers
				 << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
                nNumbers++;
		nTotal += nValue;
	}

	cin.ignore(10000, '\n');
	return 0;
}
