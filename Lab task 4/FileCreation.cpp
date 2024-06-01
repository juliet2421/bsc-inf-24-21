#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream Myfile ("exampleFile.txt");
    Myfile.close();
    return 0;
}