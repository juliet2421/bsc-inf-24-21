#include <iostream>
#include <limits>
using namespace std;

int main(){
    bool Valid_Input  = false;
    int Input;
     cout << "enter an integer value between 5 and 10" << endl;

while (!Valid_Input){
     cin >> Input; // prompting the user to enter an integer value between five and ten

      if (cin.fail()){
        cout << "sorry you have entered an invalid number, please try again\n";

        cin.clear(); // clearing the invalid input error

        cin.ignore(numeric_limits<streamsize>::max(),'\n');//clears characters inside the buffer 
      } 
      
      else if (Input < 5 || Input > 10){
        cout << "you have entered " <<  Input << "please enter a number between 5 and 10\n";
      }
      else {
        Valid_Input = true ;
      }

 
 }
      return 0;

}      
