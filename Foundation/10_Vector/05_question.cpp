#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec1 = {1,2};
  vec1.push_back(12);
  vec1.push_back(23);
  for(int val : vec1){
    cout<<val<<" ";
  }
  cout<<endl;
  vec1.pop_back();
  for(int val:vec1){
    cout<<val<<" ";
  }
  cout<<endl;
    return 0;
}