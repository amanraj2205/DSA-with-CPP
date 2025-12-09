#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec1 = {1,2,3};
  vector<int>vec2(4,5);
  for(int val:vec1){
    cout<<val<<" ";
  }
  cout<<endl;
  for(int val:vec2){
    cout<<val<<" ";
  }

    return 0;
}