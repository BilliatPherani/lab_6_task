#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* num = new int;

    // Dynamically allocate a string
    string* str = new string;

    // Prompt and assign value to the integer
    cout << "Enter an integer: ";
    cin >> *num;

    // Clear the input buffer before reading a string
    cin.ignore();

    // Prompt and assign value to the string
    cout << "Enter a string: ";
    getline(cin, *str);

    // Output the values
    cout << "\nDynamically allocated integer: " << *num << endl;
    cout << "Dynamically allocated string: " << *str << endl;

    // Free the memory
    delete num;
    delete str;

    return 0;
}