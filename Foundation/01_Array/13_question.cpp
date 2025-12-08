#include<iostream>
using namespace std;

int Sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}
int Product(int arr[],int n){
    int product = 1;
    for(int i=0;i<n;i++){
        product *= arr[i];
    }
    return product;
}
int main(){
    int arr[] = {12,67,34,23};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Sum of all elements of array is "<<Sum(arr,size)<<endl;
    cout<<"Product of all elements of array is "<<Product(arr,size)<<endl;

    return 0;
}