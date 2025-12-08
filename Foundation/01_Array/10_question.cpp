#include<iostream>
using namespace std;

int Zero_Counter(int arr[],int n){
    int count = 0;
 for(int i=0;i<n;i++){
    if(arr[i] == 0)  count++;
 }
 return count;
}

int main(){
int arr[] = {12,0,3,0,34,34,1};
int size = sizeof(arr) / sizeof(arr[0]);
cout<<"Number of Zero in array is "<<Zero_Counter(arr,size)<<endl;
    return 0;
}