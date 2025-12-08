// C++ program to illustrate how to remove a 
// given element from an array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 1, 2, 5, 90};
    int n = sizeof(arr) / sizeof(arr[0]); 

    // The element which we have to delete
    int key = 2;

    // Search key in array
    for (int i = 0; i < n; i++) {

        // If key is found in array
        if (arr[i] == key) {
          
                // Reduce size of array and move all
                // elements one space towards left
                n = n - 1;
                for (int j = i; j < n; j++)
                    arr[j] = arr[j + 1];
            break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}