#include<iostream>
using namespace std;

//  In C++, arrays and pointers are closely related to each other. The array name can be treated as a constant pointer that stored the memory address of the first element of the array.
 

int main() {
    int arr[5];
    
    // Printing array name
    cout << arr << endl;
    
    // Printing address of first element
    cout << &arr[0];

    return 0;
}