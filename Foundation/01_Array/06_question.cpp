#include<iostream>
using namespace std;

int Length_of_Array(int arr[], int n){
return n;
}

int main(){
  int arr[] = {12,23,34,21,23,23};
  int n = sizeof(arr) / sizeof(arr[0]);
  int SizeOfArray = Length_of_Array(arr, n);
  cout<<"Size of Array is : "<<SizeOfArray<<endl;
    return 0;
}