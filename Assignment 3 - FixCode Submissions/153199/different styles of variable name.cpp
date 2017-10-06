 
 #include<iostream>
 using namespace std;
 #include <stdio.h>
#include <string.h>

 int main()
{
char CatName[20] = "fluffy";      //choose a consistant style variabe names and stick to it.because many fewer compiler error u will get if u adopt a consistent
char dogName[20] = "fido";        // style.
char ratName[20] = "fester";
int Catage = 3;
int dogsage = 4;
int ratage = 1;
char myPet[20];
int itsAge;

strcpy(myPet,ratName);
itsAge = ratage;
printf("My pet is %s\n",myPet);
}

	
	
