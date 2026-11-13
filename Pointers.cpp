#include <iostream>
using namespace std;

int main(){

    int firstValue;
    int secondValue;

    int *pPointer = nullptr;

    // assign pointer with of firstValue
    pPointer = &firstValue;
    *pPointer = 20; // indirection

    cout << "firstValue is  " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';

    return 0;
}