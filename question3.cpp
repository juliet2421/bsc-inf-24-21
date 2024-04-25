#include <iostream>
using namespace std;

int main(){
    string elements[] = {"B123","BC234","A345","C15","B177","G3003","C235","B179"};

    int arraySize = sizeof(elements)/sizeof(elements[0]);
    char target_letter = 'B'; 
    

     for (int i = 0; i < arraySize; i++){
        if ( elements[i][0] == target_letter){
            cout << elements[i] << endl; 
        }
     }


    
    
}