#include<iostream>
#include<vector>
using namespace std;

void Selection_sort(vector<int> &arr){
  int n = arr.size();
  for(int i=0;i<n;i++){
    int min=i;
    for(int j=i;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
           
        }
    }
     swap(arr[i],arr[min]);
  }
} 
void printArray(vector<int> &arr){
     for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    vector<int>arr = {12,34,2,45,67,8,9};
    cout<<"Original array: ";
    printArray(arr);

    Selection_sort(arr);
    cout<<"Sorted array: ";
    printArray(arr);


    return 0;
}