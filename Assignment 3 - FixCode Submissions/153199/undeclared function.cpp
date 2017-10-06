 
 #include<iostream>
 using namespace std;
 void menu();    // the compiler doesn't know what menu() stand for until u have told it.and if u wait untill after using it to tell it that theres a function
                   // named menu, it will get confused. always remember to put a prototype for function. 
  int main ()
  {
  menu();
}
void menu()
{

  } 
  
