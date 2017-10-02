
#include<iostream>
using namespace std;

//main function
int main()
{
	//decalaring variable of type integer
 	int x;
 
 	//prompt
 	cout<<"Enter the integer this program will print it."<<endl;
 	
 	//taking input 
	cin>>x;
	
	//printing entered number
	cout<<x;
	return 0;
}

//"Huh? Why do I get an error?"
//Ans: declare the variable x before using it 



#include<iostream>
using namespace std;

int main()
{
	//decalaring and initiating variable
	int count=0;
	
	//prompt
	cout<<"Enter the number below 100 to initiate."<<endl;
	cin>>count;
	
	//loop
	while(count<100)
	{
		//incrementing 
		count++;
		
		//printing 
		cout<<count<<endl;
	}
	return 0;
}

//"Why doesn't my program enter the while loop?"
//Ans: initialize the varible with zero to avoid the garbage values



#include<iostream>
using namespace std;

int main()
{
	//initializing a and b
	int a, b=0;

		
	int sum;
	
	//taking input in a
	cout<<"Enter the two numbers to add: ";
	cin>>a;
	cin>>b;
	
	//initializing sum after taking input in a and b
	sum=a+b;
	cout<<"The sum is: "<<sum;

}
//"What's wrong with my program?"
//Ans: ypu have to initialize the variable with zero and use the assignment after user nput the values

#include<iostream>
using namespace std;
int main()
{
	//adding header files and used double equal sign 
	char x='Y';
	while(x=='Y')
	{
		//...
	cout<<"Continue? (Y/N)";
	cin>>x;
	}
}

//"Why doesn't my loop ever end?"

//Ans: use == operator for comparison = operator is for assigning



#include<iostream>
using namespace std;

// function decalartion
void menu();
//main Function
int main()
{
	//adding header files and function decalaration
	menu();
	return 0;
}
void menu()
{
cout<<"Helloworld";
}

//"Why do I get an error about menu being unknown?"
//Ans: you have to declare the function before using it

#include<iostream>
using namespace std;
int main()
{
	for(int x=0; x<100; x++)
	{
		cout<<x;
	}
	return 0;
}

//"Why does it output 100?"
//Ans: no it will end at 99

#include<iostream>
using namespace std;
int main()
{
	//adding headerfiles storing integer in array and in for loop initialzed x with 0 to less than 10
	int array[10]={0,1,2,3,4,5,6,7,8,9};
	//...
	for(int x=0; x<10; x++)
	{
		cout<<array[x]<<endl;
	}
	return 0;
}
//"Why doesn't it output the correct values?"
//ans: array index always start at zero so the output will be wrong



#include<iostream>
using namespace std;
int main()
{
	//adding header files and adding decimal to integers 
	double half = 1/2;
	cout<<half<<endl;
	half = 1.0/2.0;
	cout<<half;
	return 0;
}
//This code sets half to 0 not 0.5! Why? 
//Ans:Because 1 and 2 are integer constants.




Take a look at the below program. Can you see anything wrong?

#include <stdio.h>
#include <string.h>

main()
{
char CatName[20] = "fluffy";
char dogName[20] = "fido";
char rat_Name[20] = "fester";
int Catage = 3;
int dogs_age = 4;
int ratage = 1;
char myPet[20];
int itsAge;

strcpy(myPet,rat_Name);
itsAge = ratage;
printf("My pet is %s\n",myPet);
}

//Besides the obviously bizarre choice of having a pet rat, do you notice anything? 
//Ans: no
s:

#include<iostream>
using namespace std;

int main()
{
	int value;
	do
	{
	//...
	value=10;
	}while(!(value==10) && !(value==20));
	return 0;
}


//Ans : be carefull using || and && operator