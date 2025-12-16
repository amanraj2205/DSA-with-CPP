#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}
void printArray(vector<int> &arr){
     for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}


int main(){
    vector<int> arr = {23,45,2,0,67,-2};

    cout<<"Original array: ";
    printArray(arr);

    bubbleSort(arr);
    cout<<"Sorted array: ";
    printArray(arr);

    return 0;
}