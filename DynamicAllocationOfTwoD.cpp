#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions from user (must not exceed 3)
    do {
        cout << "Enter number of rows (1-3): ";
        cin >> rows;
        if (rows < 1 || rows > 3) {
            cout << "Invalid! Rows must be between 1 and 3.\n";
        }
    } while (rows < 1 || rows > 3);

    do {
        cout << "Enter number of columns (1-3): ";
        cin >> cols;
        if (cols < 1 || cols > 3) {
            cout << "Invalid! Columns must be between 1 and 3.\n";
        }
    } while (cols < 1 || cols > 3);

    // Dynamically allocate a 2D array of doubles
    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // Assign values using nested loops
    cout << "\nEnter the values for the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output the array
    cout << "\nThe 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // Free the memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}