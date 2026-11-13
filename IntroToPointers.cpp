using namespace std;
#include <iostream>

int main(){

    //declare pointer and initialize it
    // so that it doesn't store a random address
    int *pPointer = nullptr;

    int integerVar = 5;

    // assign pointer to address of object 
    pPointer =&integerVar;

    // output the value of integerVar
    cout << "IntegerVar: " << integerVar << endl;
    
    //output the address of integrVar
    cout << "Address of integerVar: " << &integerVar << endl;

    //output the address of integerVar assgned to pointer
    cout << "pPointer: " << pPointer << endl;

    //output the address of pPointer
    cout << "Address of pPointer: " << &pPointer << endl;

    return 0;
}
