#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int Smallest(int arr[],int n){
    int num = INT_MAX;
    for(int i=0;i<n;i++){
        if(num>arr[i]) num=arr[i];
    }
    return num;
}
int largest(int arr[],int n){
    int num = INT_MIN;
    for(int i=0;i<n;i++){
        if(num<arr[i]) num=arr[i];
    }
    return num;
}

int main(){
    int arr[5] = {12,34,6,4,45};
    int big = largest(arr,5);
    int small = Smallest(arr,5);
    cout<<"Smallest element of array is "<<small<<endl;
    cout<<"Largest element of array is "<<big<<endl;

    return 0;
}