#include<iostream>
using namespace std;

int EvenCounter(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) count++;
    }
    return count;
}

int OddCounter(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 != 0) count++;
    }
    return count;
}
// I don't know to handle multiple return values 
 
// int CountEven_Odd(int arr[], int n){
//     int count[2];
//     int Even_Count=0 , Odd_Count=0;
//     for(int i=0 ;i<n;i++){
//         if(arr[i] % 2 == 0) Even_Count++;
//         else Odd_Count++;
//     }
//     count[0] = Even_Count;
//     count[1] = Odd_Count;
//     return count[2];
// }

int main(){
    int arr[] = {12,34,23,1,1,0,243};
    int size = sizeof(arr) / sizeof(arr[0]);
   cout<<"Number of Even element is "<<EvenCounter(arr,size)<<endl;
   cout<<"Number of  odd element is "<<OddCounter(arr,size)<<endl;
   // cout<<"Number of even and odd count respectively is"<<CountEven_Odd(arr,size)<<endl;
 return 0;
}