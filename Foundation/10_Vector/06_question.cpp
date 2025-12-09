#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec = {1,2,3};
  cout<<vec.front()<<endl;
  cout<<vec.back()<<endl;
  for(int val:vec){
    cout<<val<<" ";
  }
  cout<<endl;
  vec[0] = 12;
  for(int val:vec){
    cout<<val<<" ";
  }
  cout<<endl;
    return 0;
}