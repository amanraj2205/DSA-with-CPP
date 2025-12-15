#include<iostream>
using namespace std;

int linerSearch(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={12,34,563,35,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = linerSearch(arr,size,1);
    if(ans==-1){
        cout<<"Element not exist in an array"<<endl;
    }
    else{
        cout<<"Element is found at "<<ans<<" index"<<endl;
    }
    return 0;
}