#include <iostream>
using namespace std;

void printArray(int arr[], int size) { // Corrected function name with capital A
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Access elements using arr[i]
    }
    cout << " The is printed "  << endl;
}

int main() {

    int one[15];
     // Array with size 12

    printArray(one, 3); // Pass the correct size (number of elements to print)

    return 0;
}
