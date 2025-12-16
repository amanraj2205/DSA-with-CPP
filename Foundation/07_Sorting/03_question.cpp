#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void printArray(vector<int> &arr){
     for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {12,45,2,3,0,12,43};
    cout<<"Original array: ";
    printArray(arr);

    insertionSort(arr);
    cout<<"Sorted array: ";
    printArray(arr);
    return 0;
}