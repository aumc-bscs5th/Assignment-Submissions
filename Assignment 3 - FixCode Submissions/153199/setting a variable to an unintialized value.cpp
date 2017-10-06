
 #include<iostream>
 using namespace std;
 int main()
{
   int a,b;   // in c++ a variable to equal the result of an operation on several others variables that whenever those variables change (a & b in this example)
  int sum;   // the value of the variable change.
             // in c++ the assignment does not work this way once u assign a value to a variable its that value untill u reassign the values
  cout<<"enter two numbers to add:"<<endl;
  cin>>a;
  cin>>b;
  sum = a+b;
  cout<< "the sum is" <<sum;
  return 0;
}
