#include<iostream>
using namespace std;

int Find_Element(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key) return i;
    }
    return 0;
}

int main(){
    int arr[] = {12,23,343,23,34,78,9,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = Find_Element(arr,size,1);
    if(index == 0){
        cout<<"Element not Found in array"<<endl;
    }
    else{

    cout<<"Element is found at index "<<index<<endl;
    }
    return 0;
}