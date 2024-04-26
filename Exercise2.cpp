#include<iostream>

using namespace std;

int main() {

    int rows ,columns;
   

    cout << "Enter the number of rows (not exceeding 3)" << endl; 
    cin >> rows;

    cout << "Enter the number of columns (not exceeding 3)" << endl;
    cin >> columns;

       if (rows > 3 || columns > 3 || rows <=0 || columns <= 0){ //checking if dimensions exceed 3.
        cout << "invalid dimensions. exiting program."<<endl;
       return 1;
    }
    
       // dynamically allocating double values to rows and columns of the 2D array.
    double** Array_2D = new double*[rows];
      for (int i = 0; i < rows; ++i) {
        Array_2D [i] = new double [columns];
      }
      
       
    
     
        
     cout << "Enter values for the "<< rows << "x" << columns << "2D array"<<endl;
         //a nested loop for assigning values to each element of the array
       for (int i = 0; i < rows; ++i){
         for (int j=0; j< columns; ++j){
            cout << "Enter values for array[" << i << "][" << j << "]:";
            cin >> Array_2D[i][j];
         }
       }
    
    cout << "The 2D array you entered is : "<<endl;
       // outputing the values of each element of the array into the console.
      for (int i = 0; i<rows; ++i){
        for (int j=0; j<columns; ++j){
            cout << Array_2D [i][j] <<" ";
        }
        cout << endl;

      }
    
     // deallocating memory
     for (int i = 0; i< rows; ++i){
        delete[] Array_2D [i];
     }
     delete[] Array_2D;
     return 0;

}
    
