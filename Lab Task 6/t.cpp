\
#include <iostream>
using namespace std;

int main() {
    int numbersArray[5];
    int* pPointer = numbersArray; // Initialize pPointer with the address of numbersArray[0]

    *pPointer = 10; // Assign a value to the first element
    pPointer++; // Move to the next element
    *pPointer = 20; // Assign a value to the second element

    pPointer = &numbersArray[2]; // Assign the address of the third element
    *pPointer = 30; // Assign a value to the third element

    pPointer = numbersArray + 3; // Move to the fourth element
    *pPointer = 40; // Assign a value to the fourth element

    *(pPointer + 1) = 50; // Assign a value to the fifth element (alternative syntax)

    // Output all the elements in the array
    for (int n = 0; n < 5; n++)
        cout << numbersArray[n] << ",";

    return 0;
}
