#include<iostream>
#include<iomanip>
#include<cstdlib>
  

    
  

using namespace std;

int main () {

   double Triangle (double base, double height);
   double Rectangle (double width, double height);
   double Square (double side);

    int option;
    
    bool quit = false;

    while(!quit){//using a while loop so that the program should not stop running until the user provides input
      cout <<"1. Triangle"<<endl;
      cout <<"2. Rectangle"<<endl;
      cout <<"3. Square"<<endl;
      cout <<"4.quit program"<<endl;
      cout <<"Enter selection:"<<endl;
      

     
     cin >> option;

     switch(option){
        case 1: {
            double base, height;
            cout<<"please enter the base and height of the triangle:"<<endl;
            cin >> base;
            cin >> height;
            double areaOfTriangle = Triangle(base, height); 
            cout << fixed << setprecision(2);
            cout << "The area for your request is:" << areaOfTriangle << endl;
            break;
           }
        case 2: {
        double width, height;
        cout << "Please provide the width  and the height of the rectangle:";
        cin >> width ;
        cin >> height;
        double areaOfRectangle = Rectangle(width, height);
        cout << fixed << setprecision(2);
        cout << "The area for your request is:" << areaOfRectangle << endl;
        break;
        }
     case 3:{
        double side ;
        cout << "Please provide the side length of the square:";
        cin >> side;
        double areaOfSquare = Square(side);
        cout << fixed << setprecision(2);
        cout << "The area for your request is:"<< areaOfSquare << endl;
        break;
       }
     case 4: { //this will exist the program
        cout << "Thank you for using the program" << endl;
        quit = true;
        break;  
       }
     default: 
            cout << "Your entry was invalid" << endl;
     }
    }
    
  

   return 0;
}

double Triangle (double base, double height){
   return 0.5 * base * height;
  }
double Rectangle (double width, double height){
   return width * height;
  }
double Square (double side){
   return side * side;
 }




