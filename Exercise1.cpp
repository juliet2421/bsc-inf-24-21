#include <iostream>

using namespace std;

int main(){

    int* pCopy = new int;  // dynamically allocating integer to pointer "pCopy".
    
    cout << "Enter an interger value:" << endl;
    cin >>  *pCopy;

    string* pPencil = new string; // dynamically allocating a string to pointer "pPencil".

    cout << "Enter an string value:" << endl;
    cin.ignore(); // it ignores new line character left in the stream
    getline(cin, *pPencil); 

    cout << "integer value:" << *pCopy << endl;
    cout << "string value:" << *pPencil <<endl;
    
      // deallocating memory
    delete pCopy;
    delete pPencil;

    return 0;

    
   



}