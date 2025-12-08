#include<iostream>
using namespace std;

int Reapting_Element_Count(int arr[],int n,int key){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == key) count++;
    }
    return count;
}

int main(){
    int arr[] = {12,23,34,3,12,1,12,34};
    int key =0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = Reapting_Element_Count(arr,size,key);
    if(count == 0){
     cout<<"Element is not found";
    }
    else{
        cout<<key<<" is found "<<count<<" times"<<endl;
    }
    return 0;
}