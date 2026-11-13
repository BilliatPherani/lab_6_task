#include <iostream>
using namespace std;

int main(){

    // null pointer
    int *pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};
    
    //assign address of first elements to pointer 
    pPointer = numbersArray;

    //output the address of the element
    cout << "Address to pointer: " << pPointer << endl;
    cout << "Address to numbersArray[0]: " << numbersArray << endl;

    //output the value of the first element using the pointer  and indirection 
     cout << "Value at pPointer: " << *pPointer << endl; 
    
    //this outputs the value of the second elements
    cout << "Value at ++pPointer : " << *(++pPointer) << endl; 

    //assign address of first elements  to pointer 
    pPointer = numbersArray;

    //this outputs the value of the first element

    cout << "Value at pPointer++: " << *(pPointer++) << endl;

    return 0;
}