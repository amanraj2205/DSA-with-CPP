#include<iostream>
using namespace std;

int Smaller_Than_X(int arr1[],int n, int X,int arr2[]){
    int count = 0;
    int i=0,j=0;
    while(i<n){
        if(arr1[i] < X){
            arr2[j] = arr1[i];
            count++;
            j++;
        }
        i++;
    }
    return count;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[] = {12,3,2,20,45,7};
    int arr2[] = {0};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int key = 30;
    int count = Smaller_Than_X(arr1,size,key,arr2);
    cout<<"Element is than "<<key<<" is "<<count<<endl;
    // int size_of_arr2 = sizeof(arr2) / sizeof(arr2[0]);
    // print(arr2,size_of_arr2);
    print(arr2,count);
    return 0;
}