
 #include<iostream>
 using namespace std;
 int main()
 {
 	
 char x='Y';            // if u use a single equal sign to check equailty your program will instead assign the value on the right side of the expression to the 
 while('y'==x) ;         //variable on the left hand side & the result of this statement is the value assigned.in this case the value is y which is treated as true
                        // therefor the loop will never end. use == to check for equailty.
{
//...
cout<<"Continue? (Y/N)";
cin>>x;
}
return 0;
 } 
