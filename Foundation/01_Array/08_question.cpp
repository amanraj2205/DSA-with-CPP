#include<iostream>
using namespace std;

void PrintReverse(int arr[] ,int n){
 for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
}

int main(){
int arr[] = {23,45,65,3,47};
int size = sizeof(arr) / sizeof(arr[0]);

PrintReverse(arr,size);
    return 0;
}