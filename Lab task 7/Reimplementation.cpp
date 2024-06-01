#include <iostream>
using namespace std;

int main(){
    int varA = 25;
    int varB = 100;

    int& rvarA = varA ;
    cout << "the value of varA before ref:" << varA << endl;

    int& rvarB = varB;
    cout << "the value of varB before ref:"<< varB << endl;

    rvarA = 100;
    cout << "the value of varA after ref:" << rvarA << endl;

    rvarB = 25;
    cout << "the value of varB after ref:" << rvarB << endl;

    return 0;
}