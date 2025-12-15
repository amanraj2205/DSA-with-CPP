#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int target){
   int lb = 0,ub = n-1;
   while(lb<=ub){
   int mid = lb+(ub-lb)/2;
   if(arr[mid]==target){
    return mid;
   }
   if(arr[mid]<target){
    lb = mid+1;
   }
   else{
    ub= mid-1;
   }
 }
 return -1;
}
int main(){
   int arr[]={12,25,26,56,89};
   int size = sizeof(arr)/sizeof(arr[0]);
  int ans=BinarySearch(arr,size,89);
  if(ans==-1){
    cout<<"Element not exist"<<endl;
  }
  else{
    cout<<"Element is found at "<<ans<<" index"<<endl;
  }
    return 0;
}